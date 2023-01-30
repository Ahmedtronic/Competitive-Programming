bool is_sub_sequence(vector<long long>v1 ,vector<long long>v2){
 long long count=0;
 long long j=0;

    for(long long i=0 ; i<v1.size();i++) {
        if(v1[i] == v2[j]) {
            j++;
            count++;
        }
    }
    if(count!=v2.size())
        return false;

    return true;
}