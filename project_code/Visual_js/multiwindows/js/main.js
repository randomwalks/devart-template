
//test js
var init=function(){
  console.log("hello");
  window.requestAnimationFrame(set_windows);
}


//multiwindows
var set_windows=function(){
  
  
  //set windows
          var centerY = screen.availHeight;          
          var x;
          var xbuff=xmargin = 10;
          
    for (var i =0; i<6; i++){
        var name_w = "window_0"+(i+1)+".html"; 
        var name_r = '#r_0'+(i+1);
     //  var el = document.querySelector(name_r);
        var w=i*10;
        var h=i*20;
        x=xbuff;
        xbuff+=w;
//el.setAttribute('x',x+i*50);
    //  el.setAttribute('y',centerY*0.5-(h*2)*0.5);
   //   el.setAttribute('width',w*2);
   //  el.setAttribute('height',h);
      
var a =window.open(name_w,name_w,"width=10,height=10,left=0, titlebar=no,menubar=no,scrollbars=no, statue=no");
a.resizeBy(w,h*2);
a.moveBy(x+i*50,centerY*0.5-(h*2)*0.5);
    }
    
}

window.onload=set_windows;
