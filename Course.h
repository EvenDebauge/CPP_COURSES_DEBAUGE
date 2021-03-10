#include <string>
 

class Course
{
 private:
        int meilleurScore = 0;
        int nouveauScore= 0;
        int moyenne;
        int moyenneScore;
        int ancienScore = 0;
        int scoreNegatif;
        int annulerCourse;
        int pseudoJoueur;
        int course1;
        int course2;
        int course3;
        int course4;
        int course5;

    public:
        std::string getCourse();
        int getMeilleurScore();
        int getMoyenne();
        int getPseudoJoueur();
        int getAncienScore();
        int getNouveauScore();
        int getScoreNegatif();
        Course();
        Course(std::string name);
    };

class Championnat
{
    private:
        int meilleurScoreChamp = 0;
        int moyenneChamp;
        int pseudoJoueursChamp1;
        int pseudoJoueursChamp2;
        int pseudoJoueursChamp3;
        int pseudoJoueursChamp4;
    public: 
        std::string getChampionnat();
        int getMeilleurScoreChamp();
        int getMoyenneChamp();
        Championnat();
        Championnat(std::string name);
    
};