1. Element insertion
insert({key, value}) → Inserts a key-value pair.

operator[] → Accesses value for a key, inserts default value if not present.

emplace(key, value) → Constructs and inserts in-place (faster than insert).

2. Element access
at(key) → Returns reference to value, throws exception if key not found.

operator[] → Returns reference to value, creates key if not present.

3. Element removal
erase(key) → Removes element by key.

erase(iterator) → Removes element by iterator.

clear() → Removes all elements.

4. Search & lookup
find(key) → Returns iterator to key if found, else end().

count(key) → Returns 1 if key exists, else 0.

lower_bound(key) → First element not less than key.

upper_bound(key) → First element greater than key.

equal_range(key) → Returns pair of iterators {lower_bound, upper_bound}.

5. Capacity & properties
empty() → Checks if map is empty.

size() → Returns number of elements.

max_size() → Maximum possible number of elements.

6. Iterators
begin() / end() → Forward iteration.

rbegin() / rend() → Reverse iteration.

cbegin(), cend() → Constant forward iteration.
