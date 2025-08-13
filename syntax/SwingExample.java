import javax.swing.*;

public class SwingExample {
    public static void main(String[] args) {
        // Create a JFrame (main window)
        JFrame frame = new JFrame("Swing GUI Example");
        frame.setSize(400, 300);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Add a button
        JButton button = new JButton("Click Me");
        frame.add(button);

        // Make the frame visible
        frame.setVisible(true);
    }
}
