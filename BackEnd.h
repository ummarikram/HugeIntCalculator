#pragma once
#include <iostream>
#include <string>
using namespace std;

class HugeInteger
{
private:

    char* data;
    int size;

public:

    static int NoOfHugeInt; // Static Variable that store No. of Huge Integers

    // Default Constructor
    HugeInteger()
    {                       // Set everything to 0.
        data = NULL;
        size = 0;
        NoOfHugeInt++;
    }

    int GetSize() const
    {
        return this->size;
    }
    // Overloaded Constructor
    HugeInteger(int size)
    {                           // Give this Huge Integer memory.
        this->size = size;
        data = new char[size + 1];
    }

    // Destructor
    ~HugeInteger()
    {
        if (data != NULL)     // Release memory
        {
            delete data;
            data = NULL;
            size = 0;
            NoOfHugeInt--;
        }

    }

    // Copy Constructor
    HugeInteger(const HugeInteger& obj)
    {
        this->data = NULL;
        this->size = 0;

        if (obj.data != NULL && obj.size > 0)   // Checks if object passed is not NULL.
        {
            this->size = obj.size;

            this->data = new char[this->size + 1];

            for (int i = 0; i < this->size; i++)   // Deep Copy
            {
                this->data[i] = obj.data[i];
            }

            this->data[this->size] = NULL;
        }

    }

    // Stream Extraction
    friend istream& operator >> (istream& in, HugeInteger& HI)
    {
        cout << "Enter a HugeInt : ";
        char* str = new char[100];     // Input using getline
        in.getline(str, 100);

        int x = 0;

        while (str[x] == '0')  // Counting 0 digits from start
        {
            x++;
        }

        HI.size = strlen(str) - x;   // Subtracting them from size;

        if (HI.data != NULL)   // if Huge Integer read in past then free memory 
        {
            delete[] HI.data; // Release memory
            HI.data = NULL;
        }

        if (HI.size > 0)   // checks if a digit was enterd.
        {
            HI.data = new char[HI.size + 1];

            // Copy Values from char pointer to Huge Integer

            for (int i = x, j = 0; j < HI.size; i++, j++)
            {
                HI.data[j] = str[i];
            }

            HI.data[HI.size] = NULL;
        }

        else if (HI.size == 0 && x == 1)  // if the only digit is zero.
        {
            HI.data = new char[2];
            HI.data[0] = '0';
            HI.data[1] = NULL;
            HI.size = 1;
        }

        else  // if no digit entered
        {
            HI.data = NULL;
            HI.size = 0;
        }

        return in;
    }

    void Write(string str)
    {
        int x = 0;

        while (str[x] == '0')  // Counting 0 digits from start
        {
            x++;
        }

        this->size = str.length() - x;   // Subtracting them from size;

        if (this->data != NULL)   // if Huge Integer read in past then free memory 
        {
            delete[] this->data; // Release memory
            this->data = NULL;
        }

        if (this->size > 0)   // checks if a digit was enterd.
        {
            this->data = new char[this->size + 1];

            // Copy Values from char pointer to Huge Integer

            for (int i = x, j = 0; j < this->size; i++, j++)
            {
                this->data[j] = str[i];
            }

            this->data[this->size] = NULL;
        }

        else if (this->size == 0 && x == 1)  // if the only digit is zero.
        {
            this->data = new char[2];
            this->data[0] = '0';
            this->data[1] = NULL;
            this->size = 1;
        }

        else  // if no digit entered
        {
            this->data = NULL;
            this->size = 0;
        }
    }

    // Stream Insertion 
    friend ostream& operator << (ostream& out, const HugeInteger& HI)
    {
        if (HI.data != NULL)   // if HI is not NULL
        {
            for (int i = 0; i < HI.size; i++)
            {
                out << HI.data[i];
            }

            out << endl;
        }

        else  // if no digit/NULL/Negative.
        {
            out << "Not Defined/Negative Value";
            out << endl;
        }

        return out;
    }

    string Read()
    {
        string out = "";

        if (this->data != NULL)   // if HI is not NULL
        {
            for (int i = 0; i < this->size; i++)
            {
                out = out + this->data[i];
            }

        }

        else
        {
            out = "0";
        }

        return out;
    }
    // Equal To
    bool operator == (const HugeInteger& HI) const
    {
        if (this->size == HI.size)  // if same size
        {
            for (int i = 0; i < HI.size; i++)
            {
                if (this->data[i] != HI.data[i])  // if any digit not same
                {
                    return false;
                }
            }

            return true;  // all digit same
        }

        return false;  // different size
    }

    // Not Equal To
    bool operator != (const HugeInteger& HI) const
    {
        return !(*this == HI);  // Opposite of Equal To
    }

    // Less Than
    bool operator < (const HugeInteger& HI) const
    {
        if (*this == HI)  // if same values
        {
            return false;
        }

        else if (this->size > HI.size) // if lhs is bigger.
        {
            return false;
        }

        else if (this->size < HI.size) // if lhs is smaller
        {
            return true;
        }

        else if (this->size == HI.size) // if size equal
        {
            for (int i = 0; i < HI.size; i++)
            {
                if (this->data[i] > HI.data[i])  // if any digit of lhs from start is greater
                {
                    return false; // lhs is bigger
                }
                else if (this->data[i] < HI.data[i])
                {
                    return true;   // lhs is smaller
                }
            }

        }

    }

    // Greater Than
    bool operator > (const HugeInteger& HI) const
    {
        if (*this == HI)  // if both equal
        {
            return false;
        }

        else if (this->size > HI.size) // if lhs is bigger.
        {
            return true;
        }

        else if (this->size < HI.size) // if lhs is smaller
        {
            return false;
        }

        else if (this->size == HI.size) // if size equal
        {
            for (int i = 0; i < HI.size; i++)
            {
                if (this->data[i] < HI.data[i])  // if any digit of lhs from start is smaller
                {
                    return false; // lhs is smaller
                }
                else if (this->data[i] > HI.data[i])
                {
                    return true;   // lhs is bigger
                }
            }
        }
    }

    // Less Than Equal To
    bool operator <= (const HugeInteger& HI) const
    {
        if (*this < HI || *this == HI)
        {
            return true;
        }

        return false;
    }

    // Greater Than Equal To
    bool operator >= (const HugeInteger& HI) const
    {
        if (*this > HI || *this == HI)
        {
            return true;
        }

        return false;
    }

    // Addition 
    const HugeInteger operator+(const HugeInteger& HI) const
    {
        int Result = 0;
        int Carry = 0;

        // Answer
        HugeInteger Answer;

        if (HI.size < this->size)
        {
            if (HI.size == 1 && HI.data[0] == '0')  // if addition with zero
            {
                return *this;
            }

            HugeInteger Temp1;

            Temp1.data = new char[(this->size + 4)];

            int ThisIndex = this->size - 1;

            int TempIndex = this->size;

            for (int i = HI.size - 1; i >= 0; i--)  // Adding smaller number with bigger number
            {
                Result = (this->data[ThisIndex--] - '0') + (HI.data[i] - '0') + Carry;
                Carry = Result / 10;
                Result = Result % 10;
                Temp1.data[TempIndex--] = Result + '0';
            }

            for (int i = ThisIndex; i >= 0; i--)  // Adding leftovers of big number
            {
                Result = (this->data[i] - '0') + Carry;
                Carry = Result / 10;
                Result = Result % 10;
                Temp1.data[TempIndex--] = Result + '0';
            }

            Temp1.data[TempIndex] = Carry + '0';

            if (Temp1.data[TempIndex] == '0')   // if there is a zero at first position
            {
                for (int i = 0; i < this->size; i++)    // Shift all digits to the left replacing zero
                {
                    Temp1.data[i] = Temp1.data[i + 1];
                }

                Temp1.data[this->size] = NULL;

                Temp1.size = this->size;
            }

            else
            {
                Temp1.data[this->size + 1] = NULL;
                Temp1.size = this->size + 1;
            }

            return Temp1;
        }

        else if (HI.size > this->size)
        {
            Answer = (HI + *this);   // Cascading reverse call 

            return Answer;

        }

        else if (HI.size == this->size)
        {
            // if Null Addition
            if (HI.data == NULL || this->data == NULL)
            {
                return Answer;
            }

            // Giving Answer memory
            Answer.data = new char[(HI.size + 2)];

            int HIIndex = HI.size - 1;
            int TempIndex = HI.size;

            // Add
            for (int i = this->size - 1; i >= 0; i--)
            {
                Result = (this->data[i] - '0') + (HI.data[i] - '0') + Carry;
                Carry = Result / 10;
                Result = Result % 10;
                Answer.data[TempIndex--] = Result + '0';
            }

            // Adjust last carry at first position
            Answer.data[TempIndex] = Carry + '0';

            // if carry was 0
            if (Answer.data[TempIndex] == '0')
            {
                // Shift all digits backwards replacing this 0 carry
                for (int i = 0; i < HI.size; i++)
                {
                    Answer.data[i] = Answer.data[i + 1];
                }

                Answer.data[HI.size] = NULL;

                Answer.size = HI.size;
            }

            else
            {
                Answer.data[HI.size + 1] = NULL;
                Answer.size = HI.size + 1;
            }

            // return Answer
            return Answer;
        }

    }

    // Subtraction
    const HugeInteger operator-(const HugeInteger& HI) const
    {
        HugeInteger Answer;

        // Checking Corner Cases
        {
            if (this->data == NULL || HI.data == NULL)
            {
                return Answer;
            }

            if (HI.size == 1 && HI.data[0] == '0')
            {
                return *this;
            }

            if (this->size == 1 && this->data[0] == '0')
            {
                return Answer;
            }

            if (*this == HI)
            {
                Answer.data = new char[2];
                Answer.data[0] = '0';
                Answer.data[1] = NULL;
                Answer.size = 1;

                return Answer;
            }
        }


        if (*this > HI)
        {
            HugeInteger RefLHS = *this;

            // Answer Array
            Answer.data = new char[(this->size) + 1];

            int Result = 0;
            int Borrow = 0;
            int ThisIndex = this->size - 1;
            int HIIndex = HI.size - 1;
            int TempIndex = this->size - 1;

            // Subtraction digits of smaller number (from end) from Bigger Number digits (from end)
            for (int i = HIIndex; i >= 0; i--)
            {
                // Check if subtracting from a smaller digit then do borrow from left digit
                if (RefLHS.data[ThisIndex] < HI.data[i])
                {
                    if (RefLHS.data[ThisIndex - 1] == '0')   // if left digit is 0
                    {
                        int j = ThisIndex - 1;

                        // continue borrowing from further left digits if they are 0, "Special Case"
                        while (RefLHS.data[j] == '0')
                        {
                            RefLHS.data[j] = '9';  // Adjust these digits after borrowing
                            j--;
                        }

                        RefLHS.data[j] = RefLHS.data[j] - 1;  // Subtract one digit from giver

                    }

                    else
                    {
                        // Subtract one digit from giver
                        RefLHS.data[ThisIndex - 1] = RefLHS.data[ThisIndex - 1] - 1;
                    }

                    Borrow = (RefLHS.data[ThisIndex] - '0') + 10;  // New Digit formed after borrowing

                    Result = Borrow - (HI.data[i] - '0');  // Result after subtracting from New digit
                }

                else  // if subtracting from bigger digit, normal case
                {
                    // Subtract digits and store it in Result
                    Result = (RefLHS.data[ThisIndex] - '0') - (HI.data[i] - '0');
                }

                // Store Result in Answer
                Answer.data[TempIndex--] = Result + '0';

                // Next position to fill
                ThisIndex--;
            }

            // Handling leftovers from bigger number
            for (int i = ThisIndex; i >= 0; i--)
            {
                Result = (RefLHS.data[i] - '0');

                Answer.data[TempIndex--] = Result + '0';
            }

            TempIndex++;

            int NewSize = RefLHS.size - 1;

            if (Answer.data[TempIndex] != '0')
            {
                Answer.data[RefLHS.size] = NULL;
                Answer.size = RefLHS.size;
            }

            // while there are zeros at starting indexes
            while (Answer.data[TempIndex] == '0')
            {
                // Replace them by shifting all digits to the left
                for (int i = 0; i < RefLHS.size - 1; i++)
                {
                    Answer.data[i] = Answer.data[i + 1];
                }

                // Adjust NULL and size
                Answer.data[RefLHS.size - 1] = NULL;
                Answer.size = NewSize--;
            }


            // Return Answer
            return Answer;
        }

        // In case if lhs number was small
        //we return null as subtraction will result in negative number
        else
        {
            return Answer;
        }
    }

    // Assignment
    HugeInteger& operator=(const HugeInteger& HI)
    {
        if (HI.data != NULL && HI.size > 0)  // if passed object is not NULL and has size
        {
            if (this->data != NULL)   // Check if memory already given
            {
                delete[] this->data;   // free memory
                this->data = NULL;
                this->size = 0;
            }

            this->data = new char[HI.size + 1];   // Allocate Memory

            for (int i = 0; i < HI.size; i++)   // Deep Copy
            {
                this->data[i] = HI.data[i];
            }

            this->data[HI.size] = NULL;

            this->size = HI.size;
        }

        else if (HI.size == 0)
        {
            this->data = NULL;
            this->size = 0;
        }

        return *this;

    }

    // Multiply
    const HugeInteger operator*(const HugeInteger& HI) const
    {
        HugeInteger Answer;

        // Checking Corner cases
        {
            if (HI.size == 0 || this->size == 0)
            {
                return Answer;
            }

            if (HI.data[0] == '0' || this->data[0] == '0')
            {
                Answer.data = new char[2];
                Answer.data[0] = '0';
                Answer.data[1] = NULL;
                Answer.size = 1;
                return Answer;
            }
        }

        if (this->data != NULL && HI.data != NULL)
        {
            int Carry = 0;
            int Result = 0;

            int ThisIndex = this->size - 1;
            int HIIndex = HI.size - 1;
            int SumIndex = 0;

            // Switch Numbers as it will compute same result.
            if (HI.size > this->size)
            {
                return (HI * (*this));
            }

            if (HI.size <= this->size)
            {
                // Making a dynamic Array of Sums.
                HugeInteger* Sum = new HugeInteger[HI.size];

                int SumArrIndex = 0;
                int TempThisSize = this->size;

                // Giving Sum Array memory based on smaller number size
                {
                    if (HI.size == 1)
                    {
                        Sum[0].data = new char[(this->size + HI.size) + 1];
                        Sum[0].data[(this->size + HI.size)] = NULL;
                        SumIndex = (this->size + HI.size) - 1;

                    }

                    else
                    {
                        for (int i = 0; i < HI.size; i++)
                        {
                            Sum[i].data = new char[(this->size * this->size) + i];
                        }

                        SumIndex = TempThisSize;
                    }
                }


                // Multiplying each digit (Starting from right) of Smaller number (HI) 
                // with All digits of Big Number (*this) and storing it in Sums Array
                for (int i = HI.size - 1; i >= 0; i--)
                {
                    Carry = 0, Result = 0;

                    for (int j = this->size - 1; j >= 0; j--)
                    {
                        Result = (this->data[j] - '0') * (HI.data[i] - '0') + Carry;
                        Carry = Result / 10;
                        Result = Result % 10;
                        Sum[SumArrIndex].data[SumIndex--] = Result + '0';
                    }

                    // if first digit not equal to 0 and all places filled, store last carry to Remove Junk
                    if (SumIndex - 1 < 0 && Sum[SumArrIndex].data[SumIndex - 1] != '0')
                    {
                        Sum[SumArrIndex].data[SumIndex--] = Carry + '0';
                        Sum[SumArrIndex].data[TempThisSize + SumArrIndex + 1] = NULL;
                    }

                    // while there are junk places left to fill at start
                    while (SumIndex >= 0)
                    {
                        // Keep storing carry which will be 0
                        Sum[SumArrIndex].data[SumIndex--] = Carry + '0';

                        // Shift all digits to the left replacing this 0 at start
                        for (unsigned int k = 0; k < (TempThisSize + SumArrIndex); k++)
                        {
                            Sum[SumArrIndex].data[k] = Sum[SumArrIndex].data[k + 1];

                        }

                        // Adjust NULL
                        Sum[SumArrIndex].data[TempThisSize + SumArrIndex] = NULL;

                        // if Carry is not 0 we do not want it to be replaced in next iteration
                        if (Carry != 0 && Sum[SumArrIndex].data[0] != '0' && Sum[SumArrIndex].data[0] > '0' && Sum[SumArrIndex].data[0] <= '9')
                        {
                            break;
                        }
                    }

                    // if first position is 0, "Being extra careful"
                    if (Sum[SumArrIndex].data[0] == '0')
                    {
                        int Track = 0;

                        // shift all digits to the left replacing this 0
                        for (unsigned int x = 0; Sum[SumArrIndex].data[x + 1] != NULL; x++)
                        {
                            Sum[SumArrIndex].data[x] = Sum[SumArrIndex].data[x + 1];
                            Track = x + 1;
                        }

                        // Adjust NULL;
                        Sum[SumArrIndex].data[Track] = NULL;
                    }

                    // Set this particular Sum size
                    Sum[SumArrIndex].size = strlen(Sum[SumArrIndex].data);

                    // Move to next sum
                    SumArrIndex++;

                    // Adjust sum index
                    SumIndex = TempThisSize + SumArrIndex;

                    // if sum index is less than smaller number size
                    if (SumArrIndex < HI.size)
                    {
                        // Adding 0s at last position after every sum
                        for (unsigned int m = 0; m < SumArrIndex; m++)
                        {
                            TempThisSize++;
                            Sum[SumArrIndex].data[TempThisSize + SumArrIndex] = '0';
                        }
                    }

                }

                // Initially Answer is 0
                Answer.data = new char[(this->size * this->size) + 1];
                Answer.data[0] = '0';
                Answer.data[1] = NULL;
                Answer.size = 1;

                // Adding all sums to achieve Final Answer.
                for (unsigned int i = 0; i < HI.size; i++)
                {
                    Answer = (Answer + Sum[i]);
                }

            }

        }

        return Answer;
    }

    // Division
    const HugeInteger operator/(const HugeInteger& Divisor) const
    {
        HugeInteger Div;

        // Checking Corner Cases
        {
            if (this->data == NULL || this->size == 0 || Divisor.size == 0 || Divisor.data == NULL)
            {
                return Div;
            }

            if (this->data[0] == '0' || Divisor.data[0] == '0')
            {
                Div.data = new char[2];
                Div.data[0] = '0';
                Div.data[1] = NULL;
                Div.size = 1;
                return Div;
            }


            if (*this < Divisor)
            {
                Div.data = new char[2];
                Div.data[0] = '0';
                Div.data[1] = NULL;
                Div.size = 1;
                return Div;
            }
        }

        if (*this == Divisor)
        {
            Div.data = new char[2];
            Div.data[0] = '1';
            Div.data[1] = NULL;
            Div.size = 1;
            return Div;
        }

        else if (this->size >= Divisor.size)
        {
            HugeInteger Remaining = *this;

            // In case if dividing a very large number by a small number
            HugeInteger Factor;
            Factor.data = new char[this->size - Divisor.size + 1];
            Factor.data[0] = '1';
            for (int i = 1; i < this->size - Divisor.size; i++)
            {
                Factor.data[i] = '0';
            }
            Factor.data[this->size - Divisor.size] = NULL;
            Factor.size = this->size - Divisor.size;

            int index = 0;
            bool FactorApplied = false;

            // If difference between Divisor and divident is very large
            // This will help in quick division
            if ((this->size - Divisor.size) > 3)
            {
                FactorApplied = true;
            }

            // Loop until Remaining Number is greater than divisor
            while (Remaining >= Divisor)
            {
                if (FactorApplied)
                {
                    // Subtract Divisor with factor applied from Remaining

                    Remaining = (Remaining - (Divisor * Factor));

                    index++;  // Count the Number of iterations 

                }

                else
                {
                    // Subtract Divisor from Remaining

                    Remaining = (Remaining - Divisor);

                    index++;  // Count the Number of iterations 


                }

            }

            string Val;

            // Convert the number of iterations to a const char* type
            {
                if (FactorApplied)
                {
                    Val = to_string(index - 1);
                }

                else
                {
                    Val = to_string(index);
                }
            }


            HugeInteger Approx;

            // Convert the number of iterations from a const char* to a huge integer
            {
                if (FactorApplied)
                {
                    Approx.data = new char[this->size - Divisor.size + Val.length() + 1];

                    for (unsigned int i = 0; i < Val.length(); i++)
                    {
                        Approx.data[i] = Val[i];
                    }

                    for (unsigned int i = Val.length(); i < this->size - Divisor.size + Val.length(); i++)
                    {
                        Approx.data[i] = '0';
                    }

                    Approx.data[this->size - Divisor.size + Val.length()] = NULL;
                    Approx.size = this->size - Divisor.size + Val.length();
                }

                else
                {
                    Approx.data = new char[Val.length() + 1];

                    for (unsigned int i = 0; i < Val.length(); i++)
                    {
                        Approx.data[i] = Val[i];
                    }

                    Approx.data[Val.length()] = NULL;
                    Approx.size = Val.length();

                }
            }

            HugeInteger PerfectRound;

            // Huge Integer to get perfect Answer close to 1 sf
            {
                PerfectRound.data = new char[2];
                PerfectRound.data[0] = '1';
                PerfectRound.data[1] = NULL;
                PerfectRound.size = 1;
            }

            // To Round the number until it reaches close to 1 sf
            int Rounding = (Divisor.size / 2) + 1;


            if (FactorApplied)
            {
                // Rounding Approximation
                while ((this->size - Rounding) >= 0)
                {
                    // Rounding Factor
                    HugeInteger Round;

                    // A Rounding Factor that will be applied on Approximated result to further refine it
                    {
                        Round.data = new char[this->size - Rounding + 1];
                        Round.data[0] = '1';

                        for (int i = 1; i < this->size - Rounding; i++)
                        {
                            Round.data[i] = '0';
                        }

                        Round.data[this->size - Rounding] = NULL;

                        Round.size = this->size - Rounding;
                    }

                    // if Approximated result is greater subtract it by Rounding Factor
                    while ((Divisor * Approx) > * this)
                    {
                        Approx = (Approx - Round);

                    }

                    // if Accurate result found
                    if (((Divisor * (Approx + PerfectRound)) > * this) && ((Divisor * Approx) <= *this))
                    {
                        break;
                    }

                    // Add Rounding Factor to Approximated Result
                    else
                    {
                        Approx = (Approx + Round);
                    }

                    // More Refine Rounding
                    Rounding++;
                }
            }

            return Approx;
        }
    }

    // Square Root
    const HugeInteger squareRoot() const
    {
        bool SqrtFound = false;

        HugeInteger Approximate;

        if (this->data == NULL)
        {
            return Approximate;
        }

        Approximate.data = new char[2];
        Approximate.data[0] = '1';
        Approximate.data[1] = NULL;
        Approximate.size = 1;

        HugeInteger PerfectApproximate = Approximate;

        HugeInteger Factor;

        int size = 0;

        if (this->size % 2 == 0)
        {
            size = (this->size / 2);
        }
        else
        {
            size = (this->size / 2) + 1;
        }

        HugeInteger Factor10;
        Factor10.data = new char[3];
        Factor10.data[0] = '1';
        Factor10.data[1] = '0';
        Factor10.data[2] = NULL;
        Factor10.size = 2;

        HugeInteger Ref = *this;

        if (*Ref.data == '0')
        {
            Approximate.data[0] = '0';

            return Approximate;
        }

        if (Ref.size > 1)
        {
            Ref.data[size] = NULL;
            Ref.size = size;
        }

        Approximate = Ref;

        while (*Ref.data > '0')
        {
            if ((Approximate * Approximate) > * this && Approximate.size > 1)
            {
                Approximate = (Ref / Factor10);

                Ref = Ref / Factor10;
            }

            if ((Approximate * Approximate) == *this)
            {
                break;
            }

            else if ((Approximate * Approximate) < *this || Approximate.size == 1)
            {
                // Rounding Factor Integer
                HugeInteger Round;

                if (Approximate.size > 2)
                {
                    Round.data = new char[Approximate.size - 1];
                    Round.data[0] = '1';

                    for (int i = 1; i < Approximate.size - 2; i++)
                    {
                        Round.data[i] = '0';
                    }

                    Round.data[Approximate.size - 2] = NULL;
                    Round.size = Approximate.size - 2;
                }

                else
                {
                    Round.data = new char[2];
                    Round.data[0] = '1';
                    Round.data[1] = NULL;
                    Round.size = 1;
                }

                HugeInteger Average;
                Average.data = new char[2];
                Average.data[0] = '2';
                Average.data[1] = NULL;
                Average.size = 1;

                HugeInteger LastApproximate;

                while (!SqrtFound)
                {
                    // Making Approximation close to Last Approximation + 1 sf.
                    if ((Approximate * Approximate) < *this)
                    {
                        LastApproximate = Approximate;

                        Approximate = Approximate * Average;

                    }

                    if (*this < (Approximate * Approximate))
                    {
                        // Making Approximation close to Last Approximation sf.
                        {
                            Approximate = ((LastApproximate + Approximate) / Average);

                            Round = Round * Factor10;

                            while (*this < (Approximate * Approximate))
                            {
                                Approximate = Approximate - Round;
                            }
                        }

                        // Making Approximation close to 3 sf.
                        while (Round.size > 2)
                        {
                            if (Round.size > 1)
                            {
                                Round = Round / Factor10;
                            }

                            while (*this > (Approximate * Approximate))
                            {
                                Approximate = Approximate + Round;
                            }

                            if (Round.size > 1)
                            {
                                Round = Round / Factor10;
                            }

                            while (*this < (Approximate * Approximate))
                            {
                                Approximate = Approximate - Round;
                            }
                        }

                        // Making Approximation to 2 sf
                        {
                            Factor10 = Factor10 * Average;

                            while ((Approximate * Approximate) > * this)
                            {
                                Approximate = Approximate - Factor10;

                            }
                        }

                        // Making Approximation to 1 sf
                        {
                            while ((Approximate * Approximate) < *this)
                            {
                                Approximate = Approximate + PerfectApproximate;
                            }

                            // In case answer was decimal floor it
                            if ((Approximate * Approximate) > * this)
                            {
                                Approximate = Approximate - PerfectApproximate;
                            }
                        }

                        // Square Root Found
                        SqrtFound = true;

                    }

                    // if sqrt found
                    if (*this == (Approximate * Approximate))
                    {
                        SqrtFound = true;
                    }
                }

                if (SqrtFound)
                {
                    break;
                }

            }

        }

        return Approximate;
    }
};

int HugeInteger::NoOfHugeInt = 0;


