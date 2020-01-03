import tensorflow as tf 
import tensorflow.compat.v1 as tf
tf.disable_v2_behavior()


node1= tf.constant(3.0,tf.float32)
node2= tf.constant(4.0)

c=node1*node2
sess= tf.Session()

File_Writer = tf.summary.FileWriter('C:\\Users\\arjun\\Documents\\VSC\\graph', sess.graph)

print(sess.run(c))

sess.close()