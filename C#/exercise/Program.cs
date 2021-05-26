// using System;

// namespace C_
// {
//     class Program
//     {
//         static void Main(string[] args)
//         {
//             //Console.WriteLine("Hello World!");
//             Console.WriteLine("What is your name?");
//             var name = Console.ReadLine();
//             var currentDate = DateTime.Now;
//             Console.WriteLine($"{Environment.NewLine}Hello, {name}, on {currentDate:d} at {currentDate:t}!");
//             Console.Write($"{Environment.NewLine}Press any key to exit...");
//             Console.ReadKey(true);
//         }
//     }
// }

using System;
namespace RectangleApplication
{
    class Rectangle
    {
        //成员变量
        double length;
        double width;
        public void Acceptdetails()
        {
            length = 4.5;
            width = 3.5;
        }
        public double GetArea()
        {
            return length * width;
        }
        public void Display()
        {
            Console.WriteLine("Length:{0}",length);
            Console.WriteLine("Width:{0}",width);
            Console.WriteLine("Area:{0}",GetArea());
        }
    }

    class ExecuteRectangle
    {
        static void Main(string[] args)
        {
            Rectangle r = new Rectangle();
            r.Acceptdetails();
            r.Display();
            Console.ReadLine();
        }
    }
}