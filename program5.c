#include<stdio.h>
int main ()
{
    double wp,mp,tlp,lwp,lmp,ilmp,ilwp,tp=1441981744,twp,tmp;
    twp=(tp*48.4)/100;
    printf("the total population of women is %lf\n",twp);
    tmp=tp-twp;
    printf("the total population of men is %lf\n",tmp);
    tlp=(tp*85.95)/100;
    printf("the total literate population is %lf\n",tlp);
    lmp=(tmp*80.95)/100;
    printf("the total literate population of men is %lf\n",lmp);
    lwp=(twp*62.84)/100;
    printf("the total literate population of women is %lf\n",lwp);
    ilmp=tmp-lmp;
    printf("the total illiterate population of men is %lf\n",ilmp);
    ilwp=twp-lwp;
    printf("the total illiterate population of women is %lf\n",ilmp);
    return 0 ;
}
