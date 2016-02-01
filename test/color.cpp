
A::b A::getThing(Fred f);
A::b A::getThing(Fred<T> f);
A::b A::getThing<T>(Fred f);
A::b A::getThing<T>(Fred<T> f);
A::b A::getThing<T<t>>(Fred<T> f);
A::b A::getThing<T<t>::List>(Fred<T> f);

A::b A<T>::getThing(Fred f);
A::b A<T>::getThing(Fred<T> f);
A::b A<T>::getThing<T>(Fred f);
A::b A<T>::getThing<T>(Fred<T> f);
A::b A<T>::getThing<T<t>>(Fred<T> f);
A::b A<T>::getThing<T<t>::List>(Fred<T> f);

A<T>::b A::getThing(Fred f);
A<T>::b A::getThing(Fred<T> f);
A<T>::b A::getThing<T>(Fred f);
A<T>::b A::getThing<T>(Fred<T> f);
A<T>::b A::getThing<T<t>::List>(Fred<T> f);

A<T>::b A<T>::getThing(Fred f);
A<T>::b A<T>::getThing(Fred<T> f);
A<T>::b A<T>::getThing<T>(Fred f);
A<T>::b A<T>::getThing<T>(Fred<T> f);
A<T>::b A<T>::getThing<T<t>::List>(Fred<T> f);

A::b getThing(Fred f);
A::b getThing(Fred<T> f);
A::b getThing<T>(Fred f);
A::b getThing<T>(Fred<T> f);
A::b getThing<T<t>>(Fred<T> f);
A::b getThing<T<t>::List>(Fred<T> f);

A<T>::b getThing(Fred f);
A<T>::b getThing(Fred<T> f);
A<T>::b getThing<T>(Fred f);
A<T>::b getThing<T>(Fred<T> f);
A<T>::b getThing<T<t>>(Fred<T> f);
A<T>::b getThing<T<t>::List>(Fred<T> f);

//Template function:
//\(\(::\)\@<=\w\+\s*<.\{-}>\|\( \)\@<=\w\+\s*<[^:]\{-}>\)(\@=/g

//Template class:
//\w\{-,1}\s\{-}<[^:]\{-}>\(::\)\@=\(\w*(\)\@!/g
