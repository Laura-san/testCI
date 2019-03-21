pipeline {
    agent any 
    stages {
        stage('---Clean---') { 
            steps {
                bat "del /f helloWorld.exe"
            }
        }
        stage('---Build---') { 
            steps {
                bat "gcc HelloWorld.c -o helloWorld"
            }
        }
        stage('---Run---') { 
            steps {
                bat "helloWorld.exe"
            }
        }
    }
}
