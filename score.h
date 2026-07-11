#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED

class Score {
private:
    int value;

public:
    Score();
    Score(int val);
    void Print() const;

    bool operator>(const Score& other) const;
    bool operator<(const Score& other) const;
    bool operator==(const Score& other) const;
    bool operator!=(const Score& other) const;
};

#endif // SCORE_H_INCLUDED
