What is a vector in C++?
A vector is like a smart, flexible array.<br>
It’s part of the C++ Standard Template Library (STL).<br>
Think of it as a resizable array – it can grow or shrink while your program runs.

✅ When to use what? <br>
Use array if size is known and fixed. <br>
Use vector if size can change or if you want convenience.


<b>How to take inputs here. </b>
Well you can use push_back() to add an element at the end of a vector.
 <pre>int i,n,x; <br>
     cin>>n; // no of inputs
     <code>vector&lt;int&gt; v; </code>
     for(i=0;i<n;i++)
     {
          cin>>x;
          v.push_back(x);
     }
     </pre>
