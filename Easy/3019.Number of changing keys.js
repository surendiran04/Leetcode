var countKeyChanges = function(s) {
    let keyChange=0;
    let x=s[0].toLowerCase();
    for(var i=1;i<s.length;i++){
        if(x!=s[i].toLowerCase()){
            keyChange++;
            x=s[i].toLowerCase();
        }
    }
    return keyChange;
};
