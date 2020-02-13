//
// inherit3.cpp
//
// accessing a base class private member through the 
// base class public interface
class A
{
  public:
    int a_pub;
    void set_priv(int i) { a_priv = i; }
  private:
    int a_priv;
};
class B : public A
{
  public:
    void g(int i)
    {
      set_priv(i);
    }
};
int main()
{
  B b;
  b.set_priv(3);
}
