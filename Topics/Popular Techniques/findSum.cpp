int findSum(string str)
{
    // A temporary string
    string temp = "";
    int sum = 0;
    for (char ch : str) {
            temp += ch;
            // increment sum by number found earlier
            sum += atoi(temp.c_str());
            // reset temporary string to empty
            temp = "";
    }
    return sum + atoi(temp.c_str());
}