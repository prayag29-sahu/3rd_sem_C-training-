// WAP to accept 10 numbers from user and find the maximum and minimum.
//  without using array
/*
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
    if(a>b&&a>c&&a>d&&a>e&&a>f&&a>g&&a>h&&a>i&&a>j) {
        cout<<a<<" is greater";
    }
    else
    if(b>a&&b>c&&b>d&&b>e&&b>f&&b>g&&b>h&&b>i&&b>j) {
        cout<<b<<" is greater";
    }
    else
    if(c>a&&c>b&&c>d&&c>e&&c>f&&c>g&&c>h&&c>i&&c>j) {
        cout<<c<<" is greater";
    }
    else
    if(d>a&&d>b&&d>c&&d>e&&d>f&&d>g&&d>h&&d>i&&d>j) {
        cout<<d<<" is greater";
    }
    else
    if(e>a&&e>b&&e>c&&e>d&&e>f&&e>g&&e>h&&e>i&&e>j) {
        cout<<e<<" is greater";
    }
    else
    if(f>a&&f>b&&f>c&&f>d&&f>e&&f>g&&f>h&&f>i&&f>j) {
        cout<<f<<" is greater";
    }
    else
    if(g>a&&g>b&&g>c&&g>d&&g>e&&g>f&&g>h&&g>i&&g>j) {
        cout<<g<<" is greater";
    }
    else
    if(h>a&&h>b&&h>c&&h>d&&h>e&&h>f&&h>g&&h>i&&h>j) {
        cout<<h<<" is greater";
    }
    else
    if(i>a&&i>b&&i>c&&i>d&&i>e&&i>f&&i>g&&i>h&&i>j) {
        cout<<i<<" is greater";
    }
    else
    if(j>a&&j>b&&j>c&&j>d&&j>e&&j>f&&j>g&&j>h&&j>i) {
        cout<<j<<" is greater";
    }
    cout<<endl;
    if(a<b&&a<c&&a<d&&a<e&&a<f&&a<g&&a<h&&a<i&&a<j) {
        cout<<a<<" is smaller";
    }
    else
    if(b<a&&b<c&&b<d&&b<e&&b<f&&b<g&&b<h&&b<i&&b<j) {
        cout<<b<<" is smaller";
    }
    else
    if(c<a&&c<b&&c<d&&c<e&&c<f&&c<g&&c<h&&c<i&&c<j) {
        cout<<c<<" is smaller";
    }
    else
    if(d<a&&d<b&&d<c&&d<e&&d<f&&d<g&&d<h&&d<i&&d<j) {
        cout<<d<<" is smaller";
    }
    else
    if(e<a&&e<b&&e<c&&e<d&&e<f&&e<g&&e<h&&e<i&&e<j) {
        cout<<e<<" is smaller";
    }
    else
    if(f<a&&f<b&&f<c&&f<d&&f<e&&f<g&&f<h&&f<i&&f<j) {
        cout<<f<<" is smaller";
    }
    else
    if(g<a&&g<b&&g<c&&g<d&&g<e&&g<f&&g<h&&g<i&&g<j) {
        cout<<g<<" is smaller";
    }
    else
    if(h<a&&h<b&&h<c&&h<d&&h<e&&h<f&&h<g&&h<i&&h<j) {
        cout<<h<<" is smaller";
    }
    else
    if(i<a&&i<b&&i<c&&i<d&&i<e&&i<f&&i<g&&i<h&&i<j) {
        cout<<i<<" is smaller";
    }
    else
    if(j<a&&j<b&&j<c&&j<d&&j<e&&j<f&&j<g&&j<h&&j<i) {
        cout<<j<<" is smaller";
    }

    return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
    int a[10], i, max = 0, min = 0;
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] >= a[max])
        {
            max = i;
        }
        if (a[i] <= a[min])
        {
            min = i;
        }
    }
    cout << a[min] << " " << a[max];
    return 0;
}
