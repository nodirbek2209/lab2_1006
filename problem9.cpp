#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct N_Student {
    int N_id;
    int N_sum;
};

bool compareN_Students(const N_Student &s1, const N_Student &s2) {
    if (s1.N_sum == s2.N_sum)
        return s1.N_id < s2.N_id; // Lower ID gets higher rank
    return s1.N_sum > s2.N_sum; // Higher sum gets higher rank
}

int main() {
    int N_N_students;
    cin >> N_N_students;

    vector<N_Student> N_students(N_N_students);

    // Input grades for each student and calculate the sum of grades
    for (int i = 0; i < N_N_students; ++i) {
        N_students[i].N_id = i + 1;
        N_students[i].N_sum = 0;
        for (int j = 0; j < 3; ++j) {
            int N_grade;
            cin >> N_grade;
            N_students[i].N_sum += N_grade;
        }
    }

    // Sort the students based on their sum of grades
    sort(N_students.begin(), N_students.end(), compareN_Students);

    // Find the rank of student with id=2
    int N_rank = 1;
    for (int i = 0; i < N_N_students; ++i) {
        if (N_students[i].N_id == 2) {
            cout << N_rank << endl;
            break;
        }
        ++N_rank;
    }
    // time complexity of code Big-O =O(n*log(n))
    return 0;
}
