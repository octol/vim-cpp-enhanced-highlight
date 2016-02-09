
AClass::b AClass::getThing(Fred f);
AClass::b AClass::getThing(Fred<T> f);
AClass::b AClass::getThing<T>(Fred f);
AClass::b AClass::getThing<T>(Fred<T> f);
AClass::b AClass::getThing<T<t>>(Fred<T> f);
AClass::b AClass::getThing<T<t>::List>(Fred<T> f);

AClass::b AClass<T>::getThing(Fred f);
AClass::b AClass<T>::getThing(Fred<T> f);
AClass::b AClass<T>::getThing<T>(Fred f);
AClass::b AClass<T>::getThing<T>(Fred<T> f);
AClass::b AClass<T>::getThing<T<t>>(Fred<T> f);
AClass::b AClass<T>::getThing<T<t>::List>(Fred<T> f);

AClass<T>::b AClass::getThing(Fred f);
AClass<T>::b AClass::getThing(Fred<T> f);
AClass<T>::b AClass::getThing<T>(Fred f);
AClass<T>::b AClass::getThing<T>(Fred<T> f);
AClass<T>::b AClass::getThing<T<t>::List>(Fred<T> f);

AClass<T>::b AClass<T>::getThing(Fred f);
AClass<T>::b AClass<T>::getThing(Fred<T> f);
AClass<T>::b AClass<T>::getThing<T>(Fred f);
AClass<T>::b AClass<T>::getThing<T>(Fred<T> f);
AClass<T>::b AClass<T>::getThing<T<t>::List>(Fred<T> f);

AClass::b getThing(Fred f);
AClass::b getThing(Fred<T> f);
AClass::b getThing<T>(Fred f);
AClass::b getThing<T>(Fred<T> f);
AClass::b getThing<T<t>>(Fred<T> f);
AClass::b getThing<T<t>::List>(Fred<T> f);

AClass<T>::b getThing(Fred f);
A<T>::b getThing(Fred<T> f);
A<T>::b getThing<T>(Fred f);
A<T>::b getThing<T>(Fred<T> f);
A<T>::b getThing<T<t>>(Fred<T> f);
A<T>::b getThing<T<t>::List>(Fred<T> f);

for( int i=0; i<12; i++ )
{
}

//Template function:
//\(\(::\)\@<=\w\+\s*<.\{-}>\|\( \)\@<=\w\+\s*<[^:]\{-}>\)(\@=/g

//Template class:
//\w\{-1,}\s\{-}<[^:]\{-}>\(::\)\@=\(\w*(\)\@!/g
