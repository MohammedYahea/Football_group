#include <stdio.h>
#include <stdlib.h>

int main()
{


    int result[4][8] = {0};
    int i, j, PT, GP, W, GF, GA, GD, k, team;
    char res, m;
    printf("Hello to the result of the group A!\n");
    printf("Teams         GP    W    D    L    GF   GA   GD   PTS \n");

    for (i = 0; i < 4; i++){
        if (i == 0){
            printf("Brazil     ");
        }else if(i == 1){
            printf("Maxico     ");
        }else if(i == 2){
            printf("Camron     ");
        } else if(i == 3){
            printf("Coratia    ");
        }

        for (j = 0; j < 8; j++){
            printf("    %d",result[i][j]);
        }
        printf("\n");

    }


 do {
    printf("please Enter the first team you want to add results, Choose\n 1 for Brazil\n 2 for Maxico, \n 3 for Cameron\n 4 for Ceroatia\n");
    scanf("  %d", &team);

    if (team == 1){
            printf("Enter results of Brazil: \n");
            printf("\nEnter 'w' if Brazil win; 'D' if Team Draw, 'L' if team lost: \n");
            scanf(" %c", &res);
            switch (res)
                 {
                case 'W':
                    PT = result[0][7];
                    PT = PT + 3;
                    result[0][7] = PT;

                    GP = result [0][0];
                    GP++;
                    result[0][0] = GP;

                    W = result [0][1];
                    W++;
                    result[0][1] = W;
                    break;
                case 'D':
                    PT = result[0][7];
                    PT = PT + 1;
                    result[0][7] = PT;

                    GP = result [0][0];
                    GP++;
                    result[0][0] = GP;

                    W = result [0][2];
                    W++;
                    result[0][2] = W;
                    break;
                case 'L':
                    PT = result[0][7];
                    PT = PT + 0;
                    result[0][7] = PT;

                    GP = result [0][0];
                    GP++;
                    result[0][0] = GP;

                    W = result [0][3];
                    W++;
                    result[0][3] = W;
                    break;
                default:
                    printf("please Enter a correct value to update the table \n");
                }

            printf("How many goal Brazil Score? \n");
            scanf("%d", &GF);
            result[0][4]= GF;

            printf("How many goal did Brazil receive? \n");
            scanf("%d", &GA);
            result[0][5]= GA;

            GD = GF - GA;
            result[0][6] = GD;
            printf("Teams         GP    W    D    L    GF   GA   GD   PTS \n");
            for (i = 0; i < 4; i++){
                if (i == 0){
                    printf("Brazil     ");
                }else if(i == 1){
                    printf("Maxico     ");
                }else if(i == 2){
                    printf("Camron     ");
                }else if(i == 3){
                    printf("Coratia    ");
                }

                for (j = 0; j < 8; j++){
                    printf("    %d",result[i][j]);
                }
                printf("\n");

            }
        }else if (team == 2){
            printf("Enter results of Maxico: \n");


            printf("\nEnter 'w' if Maxico win; 'D' if Team Draw, 'L' if team lost: \n");
            scanf(" %c", &res);
            switch (res)
                {
                case 'W':
                    PT = result[1][7];
                    PT = PT + 3;
                    result[1][7] = PT;

                    GP = result [1][0];
                    GP++;
                    result[1][0] = GP;

                    W = result [1][1];
                    W++;
                    result[1][1] = W;
                    break;
                case 'D':
                    PT = result[1][7];
                    PT = PT + 1;
                    result[1][7] = PT;

                    GP = result [1][0];
                    GP++;
                    result[1][0] = GP;

                    W = result [1][2];
                    W++;
                    result[1][2] = W;
                    break;
                case 'L':
                      PT = result[1][7];
                    PT = PT + 0;
                    result[1][7] = PT;

                    GP = result [1][0];
                    GP++;
                    result[1][0] = GP;

                     W = result [1][3];
                    W++;
                    result[1][3] = W;
                    break;
                default:
                    printf("please Enter a correct value to update the table \n");
                }
                printf("How many goal Maxico Score? \n");
                scanf(" %d", &GF);
                result[1][4]= GF;

                printf("How many goal did Maxico receive? \n");
                scanf("%d", &GA);
                result[1][5]= GA;

                GD = GF - GA;
                result[1][6] = GD;
                printf("Teams         GP    W    D    L    GF   GA   GD   PTS \n");
                for (i = 0; i < 4; i++){
                    if (i == 0){
                        printf("Brazil     ");
                    }else if(i == 1){
                        printf("Maxico     ");
                    }else if(i == 2){
                        printf("Camron     ");
                    } else if(i == 3){
                        printf("Coratia    ");
                    }

                    for (j = 0; j < 8; j++){
                        printf("    %d",result[i][j]);
                    }
                    printf("\n");

                   }



        }else if (team == 3){
            printf("Enter results of Camron: \n");


            printf("\nEnter 'w' if Camron win; 'D' if Team Draw, 'L' if team lost: \n");
            scanf(" %c", &res);
            switch (res)
                {
                case 'W':
                    PT = result[2][7];
                    PT = PT + 3;
                    result[2][7] = PT;

                    GP = result [2][0];
                    GP++;
                    result[2][0] = GP;

                     W = result [2][1];
                    W++;
                    result[2][1] = W;
                    break;
                case 'D':
                      PT = result[2][7];
                    PT = PT + 1;
                    result[2][7] = PT;

                    GP = result [2][0];
                    GP++;
                    result[2][0] = GP;

                     W = result [2][2];
                    W++;
                    result[2][2] = W;
                    break;
                case 'L':
                      PT = result[2][7];
                    PT = PT + 0;
                    result[2][7] = PT;

                    GP = result [2][0];
                    GP++;
                    result[2][0] = GP;

                     W = result [2][3];
                    W++;
                    result[2][3] = W;
                    break;
                default:
                    printf("please Enter a correct value to update the table \n");
                }
            printf("How many goal Camron Score? \n");
            scanf("%d", &GF);
            result[2][4]= GF;

            printf("How many goal did Camron receive? \n");
            scanf("%d", &GA);
            result[2][5]= GA;

            GD = GF - GA;
            result[2][6] = GD;
            printf("Teams         GP    W    D    L    GF   GA   GD   PTS \n");
            for (i = 0; i < 4; i++){
                if (i == 0){
                    printf("Brazil     ");
                }else if(i == 1){
                    printf("Maxico     ");
                }else if(i == 2){
                    printf("Camron     ");
                } else if(i == 3){
                    printf("Coratia    ");
                }

                for (j = 0; j < 8; j++){
                    printf("    %d",result[i][j]);
                }
                printf("\n");

               }



   }else if (team == 4){
            printf("Enter results of Croatia: \n");


            printf("\nEnter 'w' if Croatia win; 'D' if Team Draw, 'L' if team lost: \n");
            scanf(" %c", &res);
            switch (res)
                {
                case 'W':
                    PT = result[3][7];
                    PT = PT + 3;
                    result[3][7] = PT;

                    GP = result [3][0];
                    GP++;
                    result[3][0] = GP;

                     W = result [3][1];
                    W++;
                    result[3][1] = W;
                    break;
                case 'D':
                      PT = result[2][7];
                    PT = PT + 1;
                    result[3][7] = PT;

                    GP = result [3][0];
                    GP++;
                    result[3][0] = GP;

                     W = result [3][2];
                    W++;
                    result[3][2] = W;
                    break;
                case 'L':
                      PT = result[3][7];
                    PT = PT + 0;
                    result[3][7] = PT;

                    GP = result [3][0];
                    GP++;
                    result[3][0] = GP;

                     W = result [3][3];
                    W++;
                    result[3][3] = W;
                    break;
                default:
                    printf("please Enter a correct value to update the table \n");
                }
            printf("How many goal Croatia Score? \n");
            scanf("%d", &GF);
            result[2][4]= GF;

            printf("How many goal did Croatia receive? \n");
            scanf("%d", &GA);
            result[2][5]= GA;

            GD = GF - GA;
            result[2][6] = GD;
            printf("Teams         GP    W    D    L    GF   GA   GD   PTS \n");
            for (i = 0; i < 4; i++){
                if (i == 0){
                    printf("Brazil     ");
                }else if(i == 1){
                    printf("Maxico     ");
                }else if(i == 2){
                    printf("Camron     ");
                } else if(i == 3){
                    printf("Coratia    ");
                }

                for (j = 0; j < 8; j++){
                    printf("    %d",result[i][j]);
                }
                printf("\n");

               }



   }
     printf("If you want to continue adding result for team, type y\n");
                scanf("  %c", &m);
 }while(m=='y');

    return 0;
}
