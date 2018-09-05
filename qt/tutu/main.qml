import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Tutu World")

    Page1Form {
        anchors.fill: parent
        id: page

        mouseArea {
            onClicked: stateGroup.state = ''
        }

        mouseArea1{
            onClicked: stateGroup.state = 'State1'
        }

        mouseArea2{
            onClicked: stateGroup.state = 'State2'
        }
    }

    StateGroup {

        id: stateGroup
        states: [
            State {
                name: "State1"
                PropertyChanges {
                    target: page.qt_icon
                    x: page.midleRectangle.x
                    y: page.midleRectangle.y
                }
            },
            State {
                name: "State2"
                PropertyChanges {
                    target: page.qt_icon
                    x: page.bottomLeftRectangle.x
                    y: page.bottomLeftRectangle.y
                }
            }
        ]
    }
}
