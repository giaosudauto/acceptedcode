/*__ _(_) __ _  ___  ___ _   _  __| | __ _ _   _| |_ ___  
 / _` | |/ _` |/ _ \/ __| | | |/ _` |/ _` | | | | __/ _ \ 
| (_| | | (_| | (_) \__ \ |_| | (_| | (_| | |_| | || (_) |
 \__, |_|\__,_|\___/|___/\__,_|\__,_|\__,_|\__,_|\__\___/ 
 |___/                                  Accepted Code  */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;

    scanf("%d", &T);
    while (T--)
    {
        int n, x, nim=0, cnt=0;
        scanf("%d", &n);
        for (int i=1; i<=n; i++)
        {
            scanf("%d", &x);
            if (x == 1) cnt++;
            nim ^= x;
        }
        if (cnt == n)
        {
            if (n%2 == 0)
                printf("1\n");
            else
                printf("-1\n");
        }
        else
        {
            if (nim > 0)
                printf("1\n");
            else
                printf("-1\n");
        }
    }
    return 0;
}

