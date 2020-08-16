bool palindrome(string a) { bool flag = 1;  int x = a.size; for (int i = 0; i < x / 2; i++) if (a[i] != a[x - i - 1]) { flag = 0; break; } return flag; }
