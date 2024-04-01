ar findKthBit = function (n, k) {
    let s = '0';
    let result = []
    result.push(s);
    for (var i = 0; i<n; i++) {
        let sn = s + "1";
        s = s.split('').map(bit => (bit === '0' ? '1' : '0')).join(''); //1's complement
        s = s.split('').reverse().join('') //reversing
        sn = sn + s;  
        s = sn;
        result.push(sn)
    }
    return result[n-1][k-1];  //n,k start from 1 so n-1,k-1 gets the crt char
};
