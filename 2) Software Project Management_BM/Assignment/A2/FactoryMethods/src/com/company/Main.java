package com.company;

public class Main {

    public static void main(String[] args) {
	// write your code here
        String[] Shapes = {"Square", "Triangle", "Circle"};
        String[] Style = {"Border", "Colored"};

        FactoryShapes shapeFactory = new FactoryShapes();

        for (int i = 0; i < Shapes.length; i++) {
            (shapeFactory.getShapes(Shapes[i])).draw();
            shapeFactory.setShapeStyle(Style[i%2],Shapes[i]);
        }
    }
}
