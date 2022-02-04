[9:26 AM] Venu (Guest)
Fulent Interface Pattern

[9:26 AM] Venu (Guest)
Method Chaining

[9:26 AM] Venu (Guest)
void main(){​​​​​

Array of String

string[]  names={​​​​​"abc",xyz","pqrs"}​​​​​;

1.iterate

foreach name in names

   2.Predicate

        if(sizeOf(name) > 3)

           3. Print name

}​​​​​ string iterate(){​​​​​}​​​​​

bool Predicate(){​​​​​}​​​​​

void print(){​​​​​}​​​​​ iterate(Array names).predicate(string print).print(string item) V1

----------------------------------------------------------

Array of String Query(Array of String){​​​​​

  ResutArray selectedStringItems;

  foreach item in array

       2.Predicate

        if(sizeOf(name) > 3)

           3.Add item -> selectedStrngItems

  return selectedStringItems;

}​​​​​

-------------------------------------------------------------

v2

------------------------------------------------------------

bool isStringLengthGreaterThanThree(string item){​​​​​

   return item length > 3;

}​​​​​ Array of String Query(Array of String, prdicateFunction predicate){​​​​​

  ResutArray selectedStringItems;

  foreach item in array

       2.Predicate

        if(predicate(item))

           3.Add item -> selectedStrngItems

  return selectedStringItems;

}​​​​​

----------------------------------------------------------------- void Print(string item){​​​​​

  print(item);

}​​​​​

----------------------------------------------------------------- void main(){​​​​​

string[]  names={​​​​​"abc",xyz","pqrs"}​​​​​;

resultArray=Query(names,&isStringLengthGreaterThanThree);

//iterate 

}​​​​​ void For(array,fun){​​​​​

  for i=0 i< array length ; i++{​​​​​

   fun(array[i]);

  }​​​​​

}​​​​​ For<string>(arrayOFString, &Print);

For<int>()

