function initialize(){
    var HTML=document.getElementById("HTML");
    var CSS=document.getElementById("CSS");
    var JavaScript=document.getElementById("Java Script");
    var code=document.getElementById("code").contentWindow.document;
    document.body.onkeyup=function(){
        code.open();
        code.writeln(
            HTML.value

        );
        code.close();
    }

}
initialize();