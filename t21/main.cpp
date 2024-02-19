#include <iostream>
#include "headers/GeomVector.h"
#include "headers/Plane.h"
#include <cstdio>
#define bVectorY 0.8660254037844386
using namespace std;  
int main() {   
    GeomVector vectorA(1,0,0);
    GeomVector vectorB(0.5,bVectorY,0);
    GeomVector vectorC(4,5,6);
    GeomVector normal(1,1,0);
    Plane plane1(normal);
    int choice;
    do{
        cout<<"\n\nwhich one wanna choose:\n0.exit\n1.dotproduct\n2.crossproduct\n3.vector addition\n4.magnitude\n5.normalization\n6.equality check\n7.scalar addition\n";
        cout<<"8.Vector scalar multiplication\n9.angle between two vectors\n10.angle with axis\n11.distance between two vectors\n12.vector projection on vector\n";
        cout<<"13.Direction cosines\n14.scalar subtract\n15.scalar division\n16.angle between vector and plane\n17.Distance between Vector and Plane\n";
        cout<<"18.vector matrix multiplication\n19.setlength\n20.projection of vector on a plane\n";
        cout<<"\n\n";
        cin>>choice;
        switch(choice){
            case 0:
            {
                cout<<"BYE-BYE"<<endl;
                break;
            }
            case 1:
            {
                cout<<"dot product of vector A and vector B is:"<<vectorA.dotProduct(vectorB)<<"degrees"<<endl;
                break;
            }
            case 2:
            {
                vectorA.crossProduct(vectorB);
                cout<<"now run the gnuplot command in console<<endl"<<endl;
                break;
            }
            case 3:
            {
                vectorA.vectorAdd(vectorB);
                cout<<"now run the gnuplot command in console<<endl"<<endl;
                break;
            }
            case 4:
            {
                cout<<"Magnitude of vector A is:"<<vectorA.magnitude()<<endl;
                break;
            }
            case 5:
            {
                vectorA.normalize();
                cout<<"now run the gnuplot command in console<<endl"<<endl;
                break;
            }
            case 6:
            {
                cout<<"vector A == vector B:"<<vectorA.isEqual(vectorB)<<endl;
                break;
            }
            case 7:
            {
                cout<<"how much wanna add?";
                double input;
                cin>>input;
                vectorA.addScalar(input);
                cout<<"now run the gnuplot command in console<<endl"<<endl;
                break;
            }
            case 8:
            {
                cout<<"how much wanna multiply?";
                double input;
                cin>>input;
                vectorA.multiplyScalar(input);
                cout<<"\n\nnow run the gnuplot command in console"<<endl;
                break;
            }
            case 9:
            {
                cout<<"angle between two vectors is: "<<vectorA.angleBetweenVector(vectorB)<<"degrees"<<endl;
                break;
            }
            case 10:
            {
                char axisName;
                cout<<"which you wanna choose:x, y or z?";
                cin>>axisName;
                if(axisName == 'x' || axisName == 'X'){
                    cout<<"\nangle between vector B and X-axis is: "<<vectorA.angleWithXaxis()<<" degree"<<endl;
                }else if(axisName == 'y' || axisName == 'Y'){
                    cout<<"\nangle between vector B and Y-axis is: "<<vectorA.angleWithYaxis()<<" degree"<<endl;
                }else if(axisName == 'z' || axisName == 'Z'){
                    cout<<"\nangle between vector B and Z-axis is: "<<vectorA.angleWithZaxis()<<" degree"<<endl;
                }else{
                    cout<<"why didn't use made right choice"<<endl;
                }
                break;
            }
            case 11:
            {
                cout<<"\n1!!INCOMPLETE!!!\n\n";
                break;
            }
            case 12:
            {
                cout<<"projection of vector C on vector A:"<<vectorC.vectorProjectionOnVector(vectorA)<<endl;
                break;
            }
            case 13:
            {
                cout<<"Direction cosines are:"<<endl;
                cout<<vectorC.directionCosines()[0]<<endl;
                cout<<vectorC.directionCosines()[1]<<endl;
                cout<<vectorC.directionCosines()[2]<<endl;
                break;
            }
            case 14:
            {
                cout<<"how much wanna subtract?";
                double input;
                cin>>input;
                vectorA.scalarSubtract(input);
                cout<<"now run the gnuplot command in console"<<endl;
                break;
            }
            case 15:
            {
                cout<<"what will be the divisor?";
                double input;
                cin>>input;
                vectorA.scalarSubtract(input);
                cout<<"now run the gnuplot command in console"<<endl;
                break;
            }
            case 16:
            {
                cout<<"the angle between vector A and a plane1:"<<vectorA.angleBetweenVectorAndPlane(plane1)<<endl;
                break;
            }
            case 17:
            {
                cout<<"!!!INCOMPLETE!!!"<<endl;
                break;
            }
            case 18:
            {
                cout<<"!!!INCOMPLETE!!!"<<endl;
                break;
            }
            case 19:
            {
                cout<<"What is desired length for thr vector C:";
                double ans;
                cin>>ans;
                vectorC.setLength(ans);
                cout<<"now run the gnuplot command"<<endl;
                break;
            }
            case 20:
            {
                cout<<"the projection of vector C on plane 1 is:"<<vectorC.projectionOfVectorOnPlane(plane1)<<endl;
                break;
            }
            default:
            {
                cout<<"choose again"<<endl;
                break;
            }
        }
    } while (choice != 0);
    cout << "\nIt works\n" << endl;
    return 0;
}
