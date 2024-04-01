var lengthOfLastWord = function(s) {
    s=s.split(' ');
    s=s.filter(word => word.trim().length > 0);
    let x=s.pop();
    return x.length;
};
