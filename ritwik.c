/*
    Name: Ritwik Ramesh Kumar Singh
    Roll No: 2106037
    Class: CSE-1 Sem-1
    This program has been developed in the Linux Environment
*/

#include <stdio.h> 
#include <string.h> 
#include <ctype.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <time.h>

#define clear() printf("\033[H\033[J")
#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y))

//declaring a global 3D character array that stores the patterns of all the letters (A to Z)
char alphabets[26][10][10]; 

//Function to set the alphabet using star patterns
void set_alphabet()
{
    strcpy(alphabets[0][0]," ******* "); 
    strcpy(alphabets[0][1],"*       *"); 
    strcpy(alphabets[0][2],"*       *"); 
    strcpy(alphabets[0][3],"*       *"); 
    strcpy(alphabets[0][4],"*********"); 
    strcpy(alphabets[0][5],"*       *"); 
    strcpy(alphabets[0][6],"*       *"); 
    strcpy(alphabets[0][7],"*       *"); 
    strcpy(alphabets[0][8],"*       *"); 
    strcpy(alphabets[0][9],"*       *"); 
     
    strcpy(alphabets[1][0],"*******  "); 
    strcpy(alphabets[1][1],"*      * "); 
    strcpy(alphabets[1][2],"*       *"); 
    strcpy(alphabets[1][3],"*      * "); 
    strcpy(alphabets[1][4],"*******  "); 
    strcpy(alphabets[1][5],"*      * "); 
    strcpy(alphabets[1][6],"*       *"); 
    strcpy(alphabets[1][7],"*      * "); 
    strcpy(alphabets[1][8],"*     *  "); 
    strcpy(alphabets[1][9],"******   "); 
     
    strcpy(alphabets[2][0],"  *******"); 
    strcpy(alphabets[2][1]," *       "); 
    strcpy(alphabets[2][2],"*        "); 
    strcpy(alphabets[2][3],"*        "); 
    strcpy(alphabets[2][4],"*        "); 
    strcpy(alphabets[2][5],"*        "); 
    strcpy(alphabets[2][6],"*        "); 
    strcpy(alphabets[2][7],"*        "); 
    strcpy(alphabets[2][8]," *       "); 
    strcpy(alphabets[2][9],"  *******"); 
     
    strcpy(alphabets[3][0],"*******  "); 
    strcpy(alphabets[3][1],"*      * "); 
    strcpy(alphabets[3][2],"*       *"); 
    strcpy(alphabets[3][3],"*       *"); 
    strcpy(alphabets[3][4],"*       *"); 
    strcpy(alphabets[3][5],"*       *"); 
    strcpy(alphabets[3][6],"*       *"); 
    strcpy(alphabets[3][7],"*       *"); 
    strcpy(alphabets[3][8],"*      * "); 
    strcpy(alphabets[3][9],"*******  "); 
     
    strcpy(alphabets[4][0],"*********"); 
    strcpy(alphabets[4][1],"*        "); 
    strcpy(alphabets[4][2],"*        "); 
    strcpy(alphabets[4][3],"*        "); 
    strcpy(alphabets[4][4],"*********"); 
    strcpy(alphabets[4][5],"*********"); 
    strcpy(alphabets[4][6],"*        "); 
    strcpy(alphabets[4][7],"*        "); 
    strcpy(alphabets[4][8],"*        "); 
    strcpy(alphabets[4][9],"*********"); 
     
    strcpy(alphabets[5][0],"*********"); 
    strcpy(alphabets[5][1],"*        "); 
    strcpy(alphabets[5][2],"*        "); 
    strcpy(alphabets[5][3],"*        "); 
    strcpy(alphabets[5][4],"******   "); 
    strcpy(alphabets[5][5],"*        "); 
    strcpy(alphabets[5][6],"*        "); 
    strcpy(alphabets[5][7],"*        "); 
    strcpy(alphabets[5][8],"*        "); 
    strcpy(alphabets[5][9],"*        "); 
     
    strcpy(alphabets[6][0],"*********"); 
    strcpy(alphabets[6][1],"*        "); 
    strcpy(alphabets[6][2],"*        "); 
    strcpy(alphabets[6][3],"*        "); 
    strcpy(alphabets[6][4],"*        "); 
    strcpy(alphabets[6][5],"*   *****"); 
    strcpy(alphabets[6][6],"*   *   *"); 
    strcpy(alphabets[6][7],"*   *   *"); 
    strcpy(alphabets[6][8],"*   *   *"); 
    strcpy(alphabets[6][9],"*****   *"); 
     
    strcpy(alphabets[7][0],"*       *"); 
    strcpy(alphabets[7][1],"*       *"); 
    strcpy(alphabets[7][2],"*       *"); 
    strcpy(alphabets[7][3],"*       *"); 
    strcpy(alphabets[7][4],"*********"); 
    strcpy(alphabets[7][5],"*********"); 
    strcpy(alphabets[7][6],"*       *"); 
    strcpy(alphabets[7][7],"*       *"); 
    strcpy(alphabets[7][8],"*       *"); 
    strcpy(alphabets[7][9],"*       *"); 
     
    strcpy(alphabets[8][0],"*********"); 
    strcpy(alphabets[8][1],"    *    "); 
    strcpy(alphabets[8][2],"    *    "); 
    strcpy(alphabets[8][3],"    *    "); 
    strcpy(alphabets[8][4],"    *    "); 
    strcpy(alphabets[8][5],"    *    "); 
    strcpy(alphabets[8][6],"    *    "); 
    strcpy(alphabets[8][7],"    *    "); 
    strcpy(alphabets[8][8],"    *    "); 
    strcpy(alphabets[8][9],"*********"); 
     
    strcpy(alphabets[9][0],"*********"); 
    strcpy(alphabets[9][1],"    *    "); 
    strcpy(alphabets[9][2],"    *    "); 
    strcpy(alphabets[9][3],"    *    "); 
    strcpy(alphabets[9][4],"    *    "); 
    strcpy(alphabets[9][5],"    *    "); 
    strcpy(alphabets[9][6],"    *    "); 
    strcpy(alphabets[9][7],"*   *    "); 
    strcpy(alphabets[9][8]," *  *    "); 
    strcpy(alphabets[9][9],"  ***    "); 
 
    strcpy(alphabets[10][0],"*      *"); 
    strcpy(alphabets[10][1],"*     * "); 
    strcpy(alphabets[10][2],"*    *  "); 
    strcpy(alphabets[10][3],"*   *   "); 
    strcpy(alphabets[10][4],"****    "); 
    strcpy(alphabets[10][5],"****    "); 
    strcpy(alphabets[10][6],"*   *   "); 
    strcpy(alphabets[10][7],"*    *  "); 
    strcpy(alphabets[10][8],"*     * "); 
    strcpy(alphabets[10][9],"*      *"); 
     
    strcpy(alphabets[11][0],"*       "); 
    strcpy(alphabets[11][1],"*       "); 
    strcpy(alphabets[11][2],"*       "); 
    strcpy(alphabets[11][3],"*       "); 
    strcpy(alphabets[11][4],"*       "); 
    strcpy(alphabets[11][5],"*       "); 
    strcpy(alphabets[11][6],"*       "); 
    strcpy(alphabets[11][7],"*       "); 
    strcpy(alphabets[11][8],"*       "); 
    strcpy(alphabets[11][9],"********"); 
     
    strcpy(alphabets[12][0],"*       *"); 
    strcpy(alphabets[12][1],"**     **"); 
    strcpy(alphabets[12][2],"* *   * *"); 
    strcpy(alphabets[12][3],"*  * *  *"); 
    strcpy(alphabets[12][4],"*   *   *"); 
    strcpy(alphabets[12][5],"*       *"); 
    strcpy(alphabets[12][6],"*       *"); 
    strcpy(alphabets[12][7],"*       *"); 
    strcpy(alphabets[12][8],"*       *"); 
    strcpy(alphabets[12][9],"*       *"); 
     
    strcpy(alphabets[13][0],"*       *"); 
    strcpy(alphabets[13][1],"**      *"); 
    strcpy(alphabets[13][2],"* *     *"); 
    strcpy(alphabets[13][3],"*  *    *"); 
    strcpy(alphabets[13][4],"*   *   *"); 
    strcpy(alphabets[13][5],"*    *  *"); 
    strcpy(alphabets[13][6],"*     * *"); 
    strcpy(alphabets[13][7],"*      **"); 
    strcpy(alphabets[13][8],"*       *"); 
    strcpy(alphabets[13][9],"*       *"); 
     
    strcpy(alphabets[14][0]," ******* "); 
    strcpy(alphabets[14][1],"*       *"); 
    strcpy(alphabets[14][2],"*       *"); 
    strcpy(alphabets[14][3],"*       *"); 
    strcpy(alphabets[14][4],"*       *"); 
    strcpy(alphabets[14][5],"*       *"); 
    strcpy(alphabets[14][6],"*       *"); 
    strcpy(alphabets[14][7],"*       *"); 
    strcpy(alphabets[14][8],"*       *"); 
    strcpy(alphabets[14][9]," ******* "); 
     
    strcpy(alphabets[15][0],"*********"); 
    strcpy(alphabets[15][1],"*       *"); 
    strcpy(alphabets[15][2],"*       *"); 
    strcpy(alphabets[15][3],"*       *"); 
    strcpy(alphabets[15][4],"*********"); 
    strcpy(alphabets[15][5],"*        "); 
    strcpy(alphabets[15][6],"*        "); 
    strcpy(alphabets[15][7],"*        "); 
    strcpy(alphabets[15][8],"*        "); 
    strcpy(alphabets[15][9],"*        "); 
     
    strcpy(alphabets[16][0],"*********"); 
    strcpy(alphabets[16][1],"*       *"); 
    strcpy(alphabets[16][2],"*       *"); 
    strcpy(alphabets[16][3],"*       *"); 
    strcpy(alphabets[16][4],"*       *"); 
    strcpy(alphabets[16][5],"*       *"); 
    strcpy(alphabets[16][6],"*  ***  *"); 
    strcpy(alphabets[16][7],"*********"); 
    strcpy(alphabets[16][8],"       * "); 
    strcpy(alphabets[16][9],"        *"); 
     
    strcpy(alphabets[17][0],"*********"); 
    strcpy(alphabets[17][1],"*       *"); 
    strcpy(alphabets[17][2],"*       *"); 
    strcpy(alphabets[17][3],"*       *"); 
    strcpy(alphabets[17][4],"*********"); 
    strcpy(alphabets[17][5],"**       "); 
    strcpy(alphabets[17][6],"* *      "); 
    strcpy(alphabets[17][7],"*  *     "); 
    strcpy(alphabets[17][8],"*   *    "); 
    strcpy(alphabets[17][9],"*    *   "); 
     
    strcpy(alphabets[18][0],"*********"); 
    strcpy(alphabets[18][1],"*       *"); 
    strcpy(alphabets[18][2],"*        "); 
    strcpy(alphabets[18][3],"*        "); 
    strcpy(alphabets[18][4],"*********"); 
    strcpy(alphabets[18][5],"*********"); 
    strcpy(alphabets[18][6],"        *"); 
    strcpy(alphabets[18][7],"        *"); 
    strcpy(alphabets[18][8],"*       *"); 
    strcpy(alphabets[18][9],"*********"); 
     
    strcpy(alphabets[19][0],"*********"); 
    strcpy(alphabets[19][1],"    *    "); 
    strcpy(alphabets[19][2],"    *    "); 
    strcpy(alphabets[19][3],"    *    "); 
    strcpy(alphabets[19][4],"    *    "); 
    strcpy(alphabets[19][5],"    *    "); 
    strcpy(alphabets[19][6],"    *    "); 
    strcpy(alphabets[19][7],"    *    "); 
    strcpy(alphabets[19][8],"    *    "); 
    strcpy(alphabets[19][9],"    *    "); 
     
    strcpy(alphabets[20][0],"*       *"); 
    strcpy(alphabets[20][1],"*       *"); 
    strcpy(alphabets[20][2],"*       *"); 
    strcpy(alphabets[20][3],"*       *"); 
    strcpy(alphabets[20][4],"*       *"); 
    strcpy(alphabets[20][5],"*       *"); 
    strcpy(alphabets[20][6],"*       *"); 
    strcpy(alphabets[20][7],"*       *"); 
    strcpy(alphabets[20][8]," *     * "); 
    strcpy(alphabets[20][9],"  *****  "); 
     
    strcpy(alphabets[21][0],"*       *"); 
    strcpy(alphabets[21][1],"*       *"); 
    strcpy(alphabets[21][2],"*       *"); 
    strcpy(alphabets[21][3],"*       *"); 
    strcpy(alphabets[21][4],"*       *"); 
    strcpy(alphabets[21][5],"*       *"); 
    strcpy(alphabets[21][6]," *     * "); 
    strcpy(alphabets[21][7],"  *   *  ");    
    strcpy(alphabets[21][8],"   * *   "); 
    strcpy(alphabets[21][9],"    *    "); 
     
    strcpy(alphabets[22][0],"*       *"); 
    strcpy(alphabets[22][1],"*       *"); 
    strcpy(alphabets[22][2],"*       *"); 
    strcpy(alphabets[22][3],"*       *"); 
    strcpy(alphabets[22][4],"*       *"); 
    strcpy(alphabets[22][5],"*   *   *"); 
    strcpy(alphabets[22][6],"*  * *  *"); 
    strcpy(alphabets[22][7],"* *   * *"); 
    strcpy(alphabets[22][8],"**     **"); 
    strcpy(alphabets[22][9],"*       *"); 
     
    strcpy(alphabets[23][0],"*       *"); 
    strcpy(alphabets[23][1]," *     * "); 
    strcpy(alphabets[23][2],"  *   *  "); 
    strcpy(alphabets[23][3],"   * *   "); 
    strcpy(alphabets[23][4],"    *    "); 
    strcpy(alphabets[23][5],"    *    "); 
    strcpy(alphabets[23][6],"   * *   "); 
    strcpy(alphabets[23][7],"  *   *  "); 
    strcpy(alphabets[23][8]," *     * "); 
    strcpy(alphabets[23][9],"*       *"); 
     
    strcpy(alphabets[24][0],"**     **"); 
    strcpy(alphabets[24][1],"**     **"); 
    strcpy(alphabets[24][2],"**     **"); 
    strcpy(alphabets[24][3],"**     **"); 
    strcpy(alphabets[24][4],"*********"); 
    strcpy(alphabets[24][5],"*********"); 
    strcpy(alphabets[24][6],"       **"); 
    strcpy(alphabets[24][7],"**     **"); 
    strcpy(alphabets[24][8],"**     **"); 
    strcpy(alphabets[24][9],"*********"); 
     
    strcpy(alphabets[25][0],"*********"); 
    strcpy(alphabets[25][1],"       * "); 
    strcpy(alphabets[25][2],"      *  "); 
    strcpy(alphabets[25][3],"     *   "); 
    strcpy(alphabets[25][4],"    *    ");
    strcpy(alphabets[25][5],"   *     "); 
    strcpy(alphabets[25][6],"  *      "); 
    strcpy(alphabets[25][7]," *       "); 
    strcpy(alphabets[25][8],"*        "); 
    strcpy(alphabets[25][9],"*********");
}

//Function to print the star pattern onto the terminal
void draw(char sentence[], int rep, int term_width)
{
    int i,k, c_pos = 0; 
    for(int j = 0; j < 10; j++){ 
        k = 0, c_pos = 0; 
        i = (int)toupper(sentence[k]) - 65;           //mapping of the character to array index
        for(int num = 0; num <= rep; num++){
                if(++c_pos >= term_width){
                    printf("\r");
                    c_pos = 0;
                }
                printf(" ");                         //to print blank spaces before the text   
        } 

        while( i < 26){ 
            for(int ctr = 0; ctr < 10; ctr++){
                if(++c_pos >= term_width){
                    printf("\r");
                    c_pos = 0;
                }
                printf("%c", alphabets[i][j][ctr]); 
            }
            printf(" ");
            if(sentence[++k] == '\0'){ 
                break;                              //exit if end of line is reached
            } 
            else if(sentence[k] == ' '){
                for(int x = 0; x < 4; x++)
                {
                    if(++c_pos >= term_width){
                        printf("\r");
                        c_pos = 0;
                    }
                    printf(" ");                    //inserting a wide gap between two words
                }
                k++;
            }
            i = (int)toupper(sentence[k]) - 65; 
        } 
        printf("\n"); 
    }
}

int main() 
{   
    set_alphabet();

    struct winsize w;               
    struct timespec ts;

    char sentence[100]; 
    int rep = 1;
    ts.tv_sec = 0.05;
    ts.tv_nsec = 0.05 * 1e9;

    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);   
    printf("Enter any sentence: ");
    fgets(sentence, 100, stdin);

    while(rep){ 
        fflush(stdout);   
        nanosleep(&ts, &ts);                //introduces a delay of 100 milliseconds
        clear();                            //clears the screen in UNIX terminal (using console codes)
        gotoxy(0, 0);                       //moves the cursor to the specified 
        draw(sentence, rep++, w.ws_col);    //prints the text in the star pattern on the terminal 
    }
         
    return 0; 
} 
