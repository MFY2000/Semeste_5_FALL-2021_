package com.company;

public class Main {

    public static void main(String[] args) {
	// write your code here
        String[] Shapes = {"Square", "Triangle", "Circle"};
        FactoryShapes shapeFactory = new FactoryShapes();
        for (var ShapeName:Shapes) {
            (shapeFactory.getShapes(ShapeName)).draw();
        }
    }
}
