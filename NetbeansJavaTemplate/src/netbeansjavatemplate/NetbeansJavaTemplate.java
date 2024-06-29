/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package netbeansjavatemplate;

import java.util.Map;

/**
 *
 * @author John Archie McKown
 */
public class NetbeansJavaTemplate {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int index;
        System.out.format("There are %d arguments%n", args.length);
        for (index = 0; index < args.length; index++) {
            System.out.format("%s%n", args[index]);
        }

        Map<String, String> env = System.getenv();
        System.out.format("%nThere are %d environment variables%n", env.size());
        for (String envName : env.keySet()) {
            System.out.format("%s=%s%n",
                    envName,
                    env.get(envName));
        }
    }
}
