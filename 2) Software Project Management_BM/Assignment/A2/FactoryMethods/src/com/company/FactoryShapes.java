package com.company;

public class FactoryShapes {
    static IShapes[] NumberOfShapes = {new Circle(), new Triangle(), new Square()};


}
class Circle implements IShapes{
    @Override
    public void draw() {
        System.out.println("Circle is Draw");
    }
}
class Square implements IShapes{
    @Override
    public void draw() {
        System.out.println("Square is Draw");
    }
}
class Triangle implements IShapes{
    @Override
    public void draw() {
        System.out.println("Triangle is Draw");
    }
}
