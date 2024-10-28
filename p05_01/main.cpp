#include <iostream>

using namespace std;

#include "time5.h"

int main()
{
    Time wakeUp( 6, 45, 0 );       // ne-const objekt
    const Time noon( 12, 0, 0 );   // const objeckt

    // FUNKCIJA CLENKA   OBJEKT
    wakeUp.setHour( 18 );  // ne-const         ne-const

    noon.setHour( 12 );    // ne-const         const

    wakeUp.getHour();      // const            ne-const

    noon.getMinute();      // const            const
    noon.printMilitary();  // const            const
    noon.printStandard();  // ne-const         const
    return 0;
}
