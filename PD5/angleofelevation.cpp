#include<bits/stdc++.h>
using namespace std;
float findheight(float angle,float distance, float height);
float distance, angle, height;
int main()
{
    float distance;
    double answer;
    cout<<"Enter the distance from the base of tree (in feet): ";
    cin>>distance;
    cout<<"Enter the angle of elevation (in degrees): ";
    cin>>angle;
    answer=findheight(angle,distance,height);
    cout<<"The height of the tree is: " <<answer <<" feet";
    return 0;

}
float findheight(float angle,float distance, float height)
{
    float angleinradians=angle/57.2958;
    height=tan(angleinradians)*distance;
    return height;
}