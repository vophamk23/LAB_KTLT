class ClockType
{
public:
    void setTime(int, int, int);
    bool equalTime(const ClockType &) const;
    ClockType(int, int, int);
    ClockType();

private:
    int hr;
    int min;
    int sec;
};

// TODO
bool ClockType::equalTime(const ClockType &otherClock) const
{
    // So sánh các biến thành viên hr, min, sec của đối tượng hiện tại
    // với các biến tương ứng của đối tượng otherClock
    return (hr == otherClock.hr &&
            min == otherClock.min &&
            sec == otherClock.sec);
}