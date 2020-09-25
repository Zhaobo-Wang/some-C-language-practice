/* write a program which reads in a number n and then prints
the following shape on the screen(this is only working for the odd *)

*********  (n)
 *******   (n-2)
  *****    (n-4)
   ***     ...
    *      (1)

*/


int main(){
    int n;
    printf("please input an integer number: \n");
    scanf("%d", &n);

    int i;
    //1) identify the number of liens as a function of the input n
    for(i = n; i >= 1; i = i - 2){ //for the n lines, and decreasing

        int j;
        //starting printing spaces, which is also a function in which line you are int
        // start by 0 -->

        int k;

        for(k = 0; k <= (n - i)/2 ; k++){

            printf(" ");

        }
        //now print the *
        for(j = 0; j < i; j++){

            printf("*");

        }

        printf("\n");

    }

    if(n%2 == 0){

        int k;

        for(k = 0; k <= (n - i)/2 ; k++){

            printf(" ");

        }
        printf("*");
    }


}
