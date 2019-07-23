import React, { Component } from "react";
import Button from "@material-ui/core/Button";
import "./Decrement.css";

class Decrement extends Component {
    constructor(props) {
        super(props);
        this.state = {
            number: props.number

        };
        this.subtract = this.subtract.bind(this);
    }

    subtract() {
        if(this.state.number === 0) {
            alert("Cannot be less than zero");
        }
        else {
            this.setState({
                number: this.state.number -1
            });
        }
    }
    render() {
        return (
            <div className = "Decrement">
                <h1>{this.state.number}</h1>
                <Button
                variant="outlined"
                size="large"
                color="primary"
                onClick={this.subtract}
                >
                Decrement
                </Button>
            </div>
        )
    }
}


export default Decrement;