ll GCD(ll num1 , ll num2){

    while (num2!=0) {

        ll temp = num1;
        num1 = num2;
        num2 =temp% num1;
    }
    return num1;
}