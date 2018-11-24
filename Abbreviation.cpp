//https://www.hackerrank.com/challenges/abbr/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dynamic-programming

#include <bits/stdc++.h>

using namespace std;

// Complete the abbreviation function below.
string abbreviation(string a, string b) {
    int m=a.size()+1;
    int n=b.size()+1;
    bool arr[m+1][n+1];

    for(int i=0;i<=m;i++)
        for(int j=0;j<=n;j++){
            if(i==0 && j==0)
                arr[i][j]=true;
            else if(i==0)
                arr[i][j]=false;
            else if(j==0){
                if(a[i-1]>=97 && a[i-1]<=122)
                    arr[i][j]=arr[i-1][j];
                else
                    arr[i][j]=false;
            }
            else if(a[i-1]==b[j-1])
                arr[i][j]=arr[i-1][j-1];
            else if(abs(a[i-1]-b[j-1])=='a'-'A' && a[i-1]>=97 && a[i-1]<=122)
                arr[i][j]=arr[i-1][j-1] || arr[i-1][j] ;
            else if(abs(a[i-1]-b[j-1])!='a'-'A' && a[i-1]>=97 && a[i-1]<=122)
                arr[i][j]=arr[i-1][j];
            else
                arr[i][j]=false;           
    }

/*
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
 */
    
    if(arr[m][n]==true)
        return "YES";
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string a;
        getline(cin, a);

        string b;
        getline(cin, b);

        string result = abbreviation(a, b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
