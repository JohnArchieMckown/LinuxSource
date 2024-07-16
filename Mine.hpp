#ifndef MINE__HPP
#define MINE__HPP

class Mine
{
public:
    Mine(); // standard constructor

    virtual ~Mine(); // deconstructon

    Mine &operator=(const Mine &lhs);

    Mine(const Mine &rhs); // copy constructor

    virtual void SetOne(int value);

    virtual void SetTwo(int value);

    virtual int GetOne() const;

    virtual int GetTwo() const;
private:
    int One;
    int Two;
};
#endif
