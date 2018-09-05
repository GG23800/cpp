import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

Item {
    id: page
    property alias page: page
    property alias qt_icon: qt_icon
    property alias topLeftRectangle: topLeftRectangle
    property alias mouseArea: mouseArea
    property alias midleRectangle: midleRectangle
    property alias mouseArea1: mouseArea1
    property alias bottomLeftRectangle: bottomLeftRectangle
    property alias mouseArea2: mouseArea2

    Image {
        id: qt_icon
        x: 10
        y: 20
        width: 55
        height: 41
        source: "QtIcon.png"
    }

    Rectangle {
        id: topLeftRectangle
        width: 55
        height: 41
        color: "#00000000"
        border.color: "#808080"
        anchors.left: parent.left
        anchors.leftMargin: 10
        anchors.top: parent.top
        anchors.topMargin: 20

        MouseArea {
            id: mouseArea
            anchors.fill: parent
        }
    }

    Rectangle {
        id: midleRectangle
        x: 5
        y: 8
        width: 55
        height: 41
        color: "#00000000"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        border.color: "#808080"
        MouseArea {
            id: mouseArea1
            anchors.fill: parent
        }
    }

    Rectangle {
        id: bottomLeftRectangle
        y: 8
        width: 55
        height: 41
        color: "#00000000"
        anchors.left: parent.left
        anchors.leftMargin: 10
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 20
        border.color: "#808080"
        MouseArea {
            id: mouseArea2
            anchors.fill: parent
        }
    }
}
