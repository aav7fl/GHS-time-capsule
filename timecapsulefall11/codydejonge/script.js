window.SCMMusicPlayer = window.SCMMusicPlayer || {
firstRun:true,
init:function(dataStr){
	if(this.firstRun) this.firstRun = false; else return;
	if(!document.body || !document.body.firstChild){ alert("The SCM Music Player must be placed after the <body> tag."); return; }
	var hosts = ["http://www2.scmplayer.net","http://www2.scmplayer.net","http://scmplayer.net","http://www2.scmplayer.net"];
	var second = (new Date()).getSeconds();
	this.host = hosts[second % hosts.length];
	//this.host = 'http://scmplayer.net';
	this.dir = '/';
	this.dataStr = dataStr;
	this.mark = '120811';
	this.data = eval('('+dataStr+')');
	if(this.data.showplaylist == "large"){
		this.data.showplaylist = screen.width>1280 ? 'true':'false';
	}
	this.args = 'url='+ escape( location.href.replace(/scmplayer\=true/g, 'scmplayer=false')) +'&place='+this.data.placement+'&showplaylist='+this.data.showplaylist+'&skin='+this.data.skin;
	this.src = this.host+this.dir+'container2.html?'+this.mark+'#'+this.args;
	this.hasFrame = window.parent!=window;
	
	if(navigator.userAgent.match(/iPad|iPhone|Android|Blackberry/i) == null){
		if(!this.hasFrame || location.href.indexOf("scmplayer=true")>0){
			this.codeNonIE();
			this.initEventsWithPlayer();
		}else{
			this.initEventsWithoutPlayer();
		}
	}else{
		this.hideHref();	
	}
},
codeNonIE:function(){
	var self = this;
	var scmCSSCode = '<style type="text/css"> html,body{overflow:hidden;} body{margin:0;padding:0;border:0;} img,a,embed,object,div,address,table,iframe,p,span,form{ display:none;border:0;margin:0;padding:0; } #scmFrame{display:block; background-color:transparent; position:fixed; top:0px; left:0px; width:100%; height:100%; z-index:167;} </style>';
	document.write(scmCSSCode);
	var scmCSS = document.createElement('div');
	scmCSS.id="scmCSS";
	scmCSS.innerHTML = scmCSSCode;
	
	var scmFrame = document.createElement('iframe');
	scmFrame.frameBorder = 0;
	scmFrame.id = "scmFrame";
	scmFrame.name = "scmFrame";
	scmFrame.allowTransparency = true;
	scmFrame.src = this.src;
	
	document.body.insertBefore(scmFrame,document.body.firstChild);
	document.body.insertBefore(scmCSS,document.body.firstChild.nextSibling);
	
	var isie = (function(){
		var undef,v = 3,div = document.createElement('div'),
		all = div.getElementsByTagName('i');
		while (
			div.innerHTML = '<!--[if gt IE ' + (++v) + ']><i></i><![endif]-->',
			all[0] );
		return v > 4 ? v : undef;
	}());

	//remove all redundant nodes
	if(!isie)
	this.addEvent(window,'load',function() {
		var current = document.body.lastChild;
		 while(current.id!="scmCSS"){
			document.body.removeChild(current);
			current = document.body.lastChild;
		} 
		current = document.body.firstChild;
		while(current.id!="scmFrame"){
			document.body.removeChild(current);
			current = document.body.firstChild;
		}
	},false);
},
initEventsWithPlayer:function(){
	var self = this;
	this.addEvent(window,"message",function(e){
		if(e.data=="SCMContainerReady"){
			var win = document.getElementById("scmFrame").contentWindow;
			win.postMessage("SCMDataReady"+self.dataStr,self.host);
		}
	}); 
	
	//fix frame height
	this.addEvent(window,'resize',function(){
		var myHeight = 0; var myWidth = 0;
		if( typeof( window.innerHeight ) == 'number' ) {
			myHeight = window.innerHeight; myWidth = window.innerWidth;
		} else if( document.documentElement && document.documentElement.clientHeight ) {
			myHeight = document.documentElement.clientHeight; myWidth = document.documentElement.clientWidth;
		} else if( document.body && document.body.clientHeight ) {
			myHeight = document.body.clientHeight; myWidth = document.body.clientWidth;
		}
		var scmFrameStyle = document.getElementById('scmFrame').style;
		scmFrameStyle.height=myHeight;
		scmFrameStyle.width = myWidth;
	},false);
	
	//fix scroll & margin
	this.addEvent(window,'load',function(){
		window.scrollTo(0,document.getElementById("scmFrame").offsetTop);
		document.body.style.margin="0";
		document.body.style.padding="0";
		document.body.style.border="0";		
		document.body.style.overflow = "hidden";
	},false);
	window.scrollTo(0,document.getElementById("scmFrame").offsetTop);
	document.body.style.overflow = "hidden";
	
},
initEventsWithoutPlayer:function(){
	//remove player when linking to external site
	this.addEvent(window,'load',function() {
		var ls = ['A','AREA'];
		for(var j=0;j<ls.length;j++){	
			var l = document.getElementsByTagName(ls[j]);
			for(var i=0; i<l.length; i++)
				if(l[i].href.indexOf('https://')==0 || (l[i].href.indexOf(location.host)==-1 &&
				l[i].href.indexOf("http://")==0  ))	
					l[i].target = '_blank';
		}
	},false);
	this.hideHref();
},
hideHref:function(){
	var $link = document.getElementById("scmHref");
	if($link) $link.style.display = "none";
},
getScript:function(){
	var po = document.createElement('script'); po.type = 'text/javascript'; po.async = true;
	po.src = src;
	var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(po, s);
},
addEvent:function(elm, evType, fn, useCapture) {
	if(elm.addEventListener) {
		elm.addEventListener(evType, fn, useCapture);
		return true;
	}else if (elm.attachEvent) {
		var r = elm.attachEvent('on' + evType, fn);
		return r;
	}else{
		elm['on' + evType] = fn;
	}
}
}
