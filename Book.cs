using System;
public class book
{
    string bookname;
    int price;
    string author;
    public book()
    {

        Console.WriteLine("无参构造函数被调用");
    }
    public void setbookname(string n)
    {
        bookname = n;

    }
    public void setprice(int p)
    {
        price = p;
    }
    public void setauthor(string a)
    {
        author = a;
    }
    public string getbookname() { return bookname; }
    public string getauthor() { return author; }
    public int getprice() { return price; }


    public book(string bookname, int price, string author)
    {
        this.bookname = bookname;
        this.price = price;
        this.author = author;
        Console.WriteLine("有参构造函数被调用");
    }
    static void Main(string[] args)
    {

        book a = new book();
        a.setauthor("YJ-L");
        a.setprice(99);
        a.setbookname("D#");
        book b = new book("C#", 999, "JY-L");
        Console.WriteLine(a.author);
        Console.WriteLine(b.author);
        string c = a.author;
        Console.WriteLine(c);


    }

}
