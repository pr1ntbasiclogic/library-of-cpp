#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "bookInfo.h"

//created by PrintBasicLogic

/* I need to add/fix:
-refresh / pause text system (done?)
-back to selections feature  (semi-done?)
-Color coded text
-repeated code ??
-SDL ???? (for classical music, i want this to be a console thingy maybe??)
*/
void cnc(){
    std::string wait;
    std::getline(std::cin, wait);
    std::cout << '\n';
    Sleep(1000);
    std::cout << "." << " ";
    Sleep(1000);
    std::cout << "." << " ";
    Sleep(1000);
    std::cout << "." << " ";
    system("cls");
}   

void lib(){ //needs cleaned up with more functions !
    mainLibraryMenu:

    int selectedBookTitle = 0;
    int selectedBookChapter = 0;

  std::cout << "Library of C++ Facts:" << '\n';
  std::cout << "--------------------------------------------" << std::endl;

    for (int i = 0; i < 9; ++i)
    {
        std::cout << "[" << i << "] "<< bookTitle[i] << '\n';
    }

  std::cout << "--------------------------------------------" << std::endl;
  std::cout << "Select a book [0,1,2--]:" << ' ';
  std::cin  >> selectedBookTitle;
  std::cout << '\n';
  cnc();
  std::cout << bookTitle[selectedBookTitle] << ' ' << "SELECTED." << '\n';
  std::cout << "Chapters of" << ' ' << bookTitle[selectedBookTitle] << '\n';
  std::cout << "--------------------------------------------" << std::endl;
    if (selectedBookTitle >= 0 && selectedBookTitle <= 2){
        char options1;
        for (int i = 0; i < 3; ++i)
        {
            std::cout << '[' << i << ']' << ' ' << bookChapter[i] << '\n'; 
        }
        mainChapterMenu1:
        cnc();
        std::cout << "--------------------------------------------" << std::endl; //repeated code
        std::cout << "Type" << " '" << selectedBookChapter << "'" << "again.";
        std::cin  >> selectedBookChapter;
        std::cout << '\n';
        std::cout << bookChapter[selectedBookChapter] << ' ' << "SELECTED." << '\n';

            if (selectedBookChapter >= 0 && selectedBookChapter <= 9){
             std::cout << bookContentFacts[selectedBookChapter];
             std::cout << '\n';
             std::cout << "<- Back [Y]: ";
             std::cin  >> options1;
                if (options1 == 'y' || options1 == 'Y')
                {
                    goto mainChapterMenu1; 
                }
            } else {
                std::cout << '\n'; //repeated code x2
                std::cout << "!! Invalid Chapter selection !!";
                std::cout << '\n';
                goto mainChapterMenu1;
            }

    } else if (selectedBookTitle >= 3 && selectedBookTitle <= 5){
        char options2;
        for (int i = 3; i < 6; ++i)
        {
            std::cout << '[' << i << ']' << ' ' << bookChapter[i] << '\n'; 
        }
        mainChapterMenu2:
        cnc();
        std::cout << "--------------------------------------------" << std::endl; //repeated code x1
        std::cout << "Type" << " '" << selectedBookChapter << "'" << "again.";
        std::cin  >> selectedBookChapter;
        std::cout << '\n';
        std::cout << bookChapter[selectedBookChapter] << ' ' << "SELECTED." << '\n';

            if (selectedBookChapter >= 10 && selectedBookChapter <= 18){
             std::cout << bookContentFacts[selectedBookChapter];
             std::cout << '\n';
             std::cout << "<- Back [Y]: ";
             std::cin  >> options2;
                if (options2 == 'y' || options2 == 'Y')
                {
                    goto mainChapterMenu2; 
                }
            } else {
                std::cout << '\n'; //repeated code x2
                std::cout << "!! Invalid Chapter selection !!";
                std::cout << '\n';
                goto mainChapterMenu2;
            }

    } else if (selectedBookTitle >= 6 && selectedBookTitle <= 8){
        char options3;
        for (int i = 6; i < 9; ++i)
        {
            std::cout << '[' << i << ']' << ' ' << bookChapter[i] << '\n'; 
        }
        mainChapterMenu3:
        cnc();
        std::cout << "--------------------------------------------" << std::endl; //repeated code x1
        std::cout << "Type" << " '" << selectedBookChapter << "'" << "again.";
        std::cin  >> selectedBookChapter;
        std::cout << '\n';
        std::cout << bookChapter[selectedBookChapter] << ' ' << "SELECTED." << '\n';

            if (selectedBookChapter >= 19 && selectedBookChapter <= 27){
             std::cout << bookContentFacts[selectedBookChapter];
             std::cout << '\n';
             std::cout << "<- Back [Y]: ";
             std::cin  >> options3;
                if (options3 == 'y' || options3 == 'Y')
                {
                    goto mainChapterMenu3; 
                }
            }else {
                std::cout << '\n'; //repeated code x2
                std::cout << "!! Invalid Chapter selection !!";
                std::cout << '\n';
                goto mainChapterMenu3;
            }

    } else {
        std::cout << '\n';
        std::cout << "!! Invalid book selection !!";
        goto mainLibraryMenu;
    }                    
}

int main()
{
  char menuChoice;
  std::string appTitle = "Library of C++ Facts";
  std::cout << "Would you like to open [Y/N]: " << appTitle << ' ';
  std::cin  >> menuChoice;
  std::cout << '\n';
  cnc();
    if (menuChoice == 'y' || menuChoice == 'Y'){
        lib();
    }
    else if (menuChoice == 'n' || menuChoice == 'N'){
      std::cout << '\n';
      std::cout << "Thank you for stopping by!";
      return 0;
    }
    else {
      std::cout << "Invalid entry.";
    }
}