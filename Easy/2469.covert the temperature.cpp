class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> result;
        result.assign(2,0);
        double a=273.15;
        double b=1.80;
        double c=32.00;
        result[0]=celsius+a; //kelvin=celsius+273.15
        result[1]=celsius*b+c; //fahrenheit=celsius*1.80+32.00
        return result;
    }
};
