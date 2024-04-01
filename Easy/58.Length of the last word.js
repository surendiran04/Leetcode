var lengthOfLastWord = function(s) {
    s=s.split(' ');
    s=s.filter(word => word.trim().length > 0);
    return s.pop().length;
};

var lengthOfLastWord = function(s) {
    s=s.split(' ');
    s=s.filter(word => word.trim().length > 0);
    return s.slice(-1)[0].length;
};
