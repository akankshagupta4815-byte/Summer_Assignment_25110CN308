#include<stdio.h>
int main(){
    int ans, score = 0;
    printf("Quiz application\n");
    printf("Q1.who is lead actress in the movie saiyaraa?\n");
    printf("1.Alia Bhatt\n2.Aneet Padda\n3.Kiara Advani\n4.Ananya Pandey\n");
    scanf("%d",&ans);

    if(ans == 2){
        score++;
    }
    printf("Q2.select odd one out ?\n");
    printf("1.Virat Kohli\n2.Tony Kakker\n3.Karan Ahujla\n4.Taylor Swift\n ");
    scanf("%d",&ans);

    if(ans == 1){
        score++;
    }
    printf("Q3.who is the president of America?\n");
    printf("1.Narendra Modi\n2.Kim Jong Un\n3.Giorgia Meloni\n4.Donald Trump\n");
    scanf("%d",&ans);

    if(ans == 4){
        score++;
    }
    printf("\nYour Score = %d/3\n",score);
    return 0;
}