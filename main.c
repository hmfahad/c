#include<stdio.h>
#include<math.h>



int main()

{

    int t, tastControl;

    scanf("%d", &t);

    for(tastControl=1; tastControl<=t; tastControl++)
    {
        int aPlusb, ab, n, res;

        scanf("%d%d%d", &aPlusb, &ab, &n);


    int discriminant, root1, root2, realPart, imaginaryPart, y, z, a, b, c;

    a=-1;
    b=aPlusb;
    c=(ab*(-1));


    discriminant = b*b-4*a*c;

    // condition for real and different roots
    if (discriminant > 0)
    {
    // sqrt() function returns square root
        root1 = (-b+sqrt(discriminant))/(2*a);
        root2 = (-b-sqrt(discriminant))/(2*a);

       // if(root1<root2)

        //printf("%lf %lf\n",root1 , root2);

        y=root1;
        z=root2;


       // else printf("%lf %lf\n", root2, root1);
    }

    //condition for real and equal roots
    else if (discriminant == 0)
    {
        root1 = root2 = -b/(2*a);

        y=root1;
        z=root2;

       // if(root1<root2)
       // printf("%lf %lf\n",root1 , root2);
       // else printf("%lf %lf\n", root2, root1);
    }

    // if roots are not real
    else
    {
        root1 = -b/(2*a);
        root2 = sqrt(-discriminant)/(2*a);
        //if(root1<root2)
        //printf("%lf %2lf\n",root1 , root2);
        //else printf("%lf %lf\n", root2, root1);

        y=root1;
        z=root2;
    }

    res= (pow(y, n)+pow(z, n));

    printf("Case %d: %d\n",tastControl, res);


    }

}
