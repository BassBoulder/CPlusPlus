#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {

    std::vector<int> convertedStudentScores{};

    for (auto score : student_scores)
        convertedStudentScores.push_back(static_cast<int>(score));

    return convertedStudentScores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {

    int failedStudentScoresCount{};

    for (auto score : student_scores)
        if (score <= 40) {
            failedStudentScoresCount += 1;
        }
    return failedStudentScoresCount;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {

    std::vector<int> simplyTheBest{};

    for (auto score : student_scores)
        if (score >= threshold) {
            simplyTheBest.push_back(static_cast<int>(score));
        }
    return simplyTheBest;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {

    int scope = (highest_score - 40) / 4;

    return { 41, 41 + scope, 41 + scope * 2, 41 + scope * 3 };
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> topRanking{};

    for (int i = 0; i < student_scores.size(); ++i) {
        int score = student_scores.at(i);
        std::string name = student_names.at(i);
        topRanking.emplace_back(std::to_string(i + 1) + ". " + name + ": " + std::to_string(score));
    }
    return topRanking;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::string topScore{};

    for (int score = 0; score < student_scores.size(); ++score) {
        if (student_scores[score] == 100) {
            return student_names[score];
        }
    }
    return "";
}