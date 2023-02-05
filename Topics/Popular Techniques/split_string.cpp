string split(string s, int start , int end){
    int i=start;
    string splited_str;
    for(; i<=end; i++){
            splited_str+=s[i];
    }
    return splited_str;
}