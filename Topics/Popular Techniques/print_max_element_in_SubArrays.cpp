void print_max_element_in_SubArrays(vector<int> arr, int start, int end)
{
    vector<int>v;
    // Stop if we have reached the end of the array
    if (end == arr.size())
        return;
        // Increment the end point and start from 0
    else if (start > end)
        print_max_element_in_SubArrays(arr, 0, end + 1);
        // Print the subarray and increment the starting point
    else {
        for (int i = start; i < end; i++)
             v.push_back(arr[i]);
        v.push_back(arr[end]);

        auto item= max_element(v.begin(),v.end());
        cout<<*item<<" ";
        v.clear();
		
        print_max_element_in_SubArrays(arr, start + 1, end);
    }
    return;
}